#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<32> bit(10);
	for(int i=0; i<32; i++)
	{
		cout << bit[i];
	}
	cout << endl;
	return 0;
}
