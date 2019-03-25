#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
typedef int(*PMETHOD)(int, int);
int(*pfunc)(int, int);
int sum(int, int);
int sub(int, int);
int test(int(*p)(int, int), int a, int b);
PMETHOD testreturn();

int main()
{
	//	cout << sum << endl;
	//
	//	pfunc = sum;
	//	int i = 1;
	//start:int result = pfunc(13, 27);
	//	cout << "Result = " << result << endl;
	//	pfunc = sub;
	//	if (i++ < 2)
	//		goto start;
	//	int(*pf[])(int, int) = { sum,sub };//Karelia PMETHOD pf[] = {sum,sub}
	//	for (int i = 0; i < 2; i++)
	//	{
	//		cout << pf[i](7, 17) << endl;
	//	}
	
	srand(time(0));
	
	int r = rand() % 2;
	if (r == 0) {
		cout << test(sum, 13, 14)<<endl;
	}
	else {
		cout << test(sub, 13, 14)<<endl;
	}
	cout << endl;
	
	cout << (testreturn()(70, 150)) << endl;
	//cout << "HelloWorld" << endl;
	//int x = 21;
	//cout << "My Num Was " << x << endl;
	//int *p = &x;
	//cout << p <<"\t"<< p + 2 << endl;
}
PMETHOD testreturn() {
	int i = rand() % 2;
	return i == 0 ? sum: sub;
}
int test(int(*p)(int, int), int a, int b) {
	return p(a, b);
}
int sum(int a, int b)
{
	cout << "Sum" << endl;
	return a + b;
}
int sub(int a, int b)
{
	cout << "Sub" << endl;
	return a - b;
}