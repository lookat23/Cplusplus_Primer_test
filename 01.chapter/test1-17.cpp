#include <iostream>

using namespace std;

int main()
{
	int n;
	int count = 0;
	while(cin>>n)
	{
		if(n<0) count++;	
	}
	cout << count << endl;
	return 0;
}
