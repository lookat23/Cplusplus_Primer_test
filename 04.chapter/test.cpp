#include <iostream>
using namespace std;

int main()
{
	//int&m = 0;
	const char&m = 'a';
	const char a ='a';
	const char* p = &a;
	char arr[10];
	char* a1 = arr+1;
	char* a2 = arr+2;
	a2-a1;
}
