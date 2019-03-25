// delegatner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	int x = 21;
	cout << "My num " <<x<< endl;
	int* p = &x;
	*p = -5;// tipizacvac cuci4
	cout << x << endl;

    return 0;
	
}