#include"stdafx.h"
#include"RSA.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<random>
#include<time.h>

using namespace std;

unsigned long long StepMOD(unsigned long long a, unsigned long long x, unsigned long long n)
{
	unsigned long long tmp;
	if (x == 1) return a % n;
	if (x & 1)
	{
		tmp = StepMOD(a, x >> 1, n);
		tmp = (tmp*tmp) % n;
		return (tmp*a) % n;
	}
	else
	{
		tmp = StepMOD(a, x >> 1, n);
		return (tmp*tmp) % n;
	}
}

unsigned long long NSD(unsigned long long a, unsigned long long b)
{
	unsigned long long g = 1;

	while (a % 2 == 0 && b % 2 == 0)
	{
		a = a / 2; b = b / 2; g = 2 * g;
	}

	while (a != 0)
	{
		while (a % 2 == 0) a = a / 2;
		while (b % 2 == 0) b = b / 2;
		if (a >= b) a = (a - b) / 2;
		else b = (b - a) / 2;
	}
	return g * b;
}

unsigned long long Inverse(unsigned long long a, unsigned long long n)
{
	long long u, v, A, B, C, D, g, c, k, nsd, n1;
	g = 1; n1 = n;
	while (!(a & 1) && !(n & 1))
	{
		a = a >> 1; n = n >> 1; g = g << 1;
	}
	u = a; v = n; A = 1; B = 0; C = 0; D = 1;
	do
	{
		while (!(u & 1))
		{
			u = u >> 1;
			if (!(A & 1) && !(B & 1)) { A = A >> 1; B = B >> 1; }
			else { A = (A + n) >> 1; B = (B - a) >> 1; }
		}
		while (!(v & 1))
		{
			v = v >> 1;
			if (!(C & 1) && !(D & 1)) { C = C >> 1; D = D >> 1; }
			else { C = (C + n) >> 1; D = (D - a) >> 1; }
		}
		if (u >= v) { u = u - v; A = A - C; B = B - D; }
		else { v = v - u; C = C - A; D = D - B; }
	} while (u);
	nsd = g * v; c = C; k = D;
	if (c < 0) c += n1;
	return c;
}

bool Test(unsigned long long p, int t)
{
	int J, s, m;
	unsigned long long a, c, b, a1, p1;
	random_device rd;  
	mt19937 gen(rd());
	for (int i = 0; i < t; i++)
	{

		a = 2 + gen() % (p - 2);
		if (NSD(a, p) != 1) return true;
		c = StepMOD(a, (p - 1) / 2, p);

		J = 1; p1 = p;
		do
		{
			if (a == 0) { J = 0; break; }
			if (a == 1) { break; }
			a1 = a; m = 0;
			while (a1 % 2 == 0)
			{
				a1 = a1 / 2; m++;
			}
			if (m % 2 == 0) s = 1;
			else
			{
				if (p1 % 8 == 1 || p1 % 8 == 7) s = 1;
				else s = -1;
			}
			if (a1 == 1) { J = J * s; break; }
			if (p1 % 4 == 3 && a1 % 4 == 3) s = -s;
			a = p1 % a1; p1 = a1; J = J * s;
		} while (1);
		if (J<0) b = p + J;
		else b = J;
		if (b != c) { return true; }
	}
	return false;
}

unsigned long long Generator()
{
	unsigned long long p, mask;
	int t = 200;
	bool BOOL;
	random_device rd;
	mt19937 gen(rd());
	do
	{
		BOOL = false;
		p = 1 + gen() % 65534;
		mask = 1; p = p | 1; p = p | (mask << 15);
		for (int i = 3; i<2000; i += 2)
			if (p%i == 0) { BOOL = true; break; }
		if (!BOOL) BOOL = Test(p, t);
	} while (BOOL);
	return p;
}

unsigned long long Generate_E(unsigned long long p, unsigned long long q)
{
	random_device rd;
	mt19937 gen(rd());
	unsigned long long E;
	do
		E = (gen()) % ((p - 1)*(q - 1) >> 1);
	while (NSD(E, (p - 1)*(q - 1)) != 1);
	return E;
}