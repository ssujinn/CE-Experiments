#include "str.h"
#include <string.h>
#include <iostream>
using namespace std;

Str::Str(int leng) : len(leng)
{
	str = new char[len];
}

Str::Str(const char *neyong)
{
	len = strlen(neyong);
	str = new char[++len];
	strcpy(str, neyong);
	
}

Str::~Str()
{
	delete[]str;
}

int Str::length(void)
{
	return len;
}


char * Str::contents(void)
{
	return str;
}


int Str::compare(class Str& a)
{
	return strcmp(str, a.contents());
}

int Str::compare(const char *a)
{
	return strcmp(str, a);
}

void Str::operator=(const char *a)
{
	delete[] str;
	str = new char[strlen(a) + 1];
	len = strlen(a);
	strcpy(str, a);
}

void Str::operator=(class Str& a)
{
	delete[] str;
	str = new char[a.length() + 1];
	len = a.length();
	strcpy(str, a.contents());
}
