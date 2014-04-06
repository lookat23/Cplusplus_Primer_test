#include <iostream>

using namespace std;

int main()
{
	union w
	{
		int a;
		char b;
	}c;
	c.a = (1);
	printf("%d\n",c.b);
	int n = 1 << 24;
	char* cc = (char*)&n;
	printf("%d\n",n);
	for(int i=0; i<4; i++)
	{
		printf("%d ", cc[i]);
	}
	puts("");
	return 0;
}
