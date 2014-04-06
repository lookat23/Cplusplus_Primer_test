#include <iostream>

using namespace std;

void print(int min, int max)
{
	cout << min++;
	int count =0;
	while(min <= max)
	{
		cout << ',';
		count++;
		if(count == 10)
		{
			cout << endl;
			count = 0;
		}
		cout << min++;
	}
	cout << endl;
}

int main()
{
	cout << "Please in min and max : ";
	int a;
	int b;
	cin >> a >> b;
	if(a<b)
	{
		print(a,b);	
	}else
	{
		print(b,a);	
	}
	return 0;
}
