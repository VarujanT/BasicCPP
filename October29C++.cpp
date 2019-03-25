#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "HelloWorld" << endl;
	int x = 21;
	cout << "My Num Was " << x << endl;
	int*p = &x;
	*p = -5;
	cout << "My Num Is " << x << " Now" << endl;
	return 0;
}