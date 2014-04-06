#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> vec;
	while(cin>>n)
	{
		vec.push_back(n);	
	}
	if(vec.empty())
	{
		cout << "no in data" << endl;
		return 1;
	}
	vector<int>::iterator it_beg;
	it_beg = vec.begin();
	while(it_beg != vec.end())
	{
		int sum = *it_beg++;
		if(it_beg != vec.end())
		{
			sum += *it_beg++;
			cout << sum << ' ';
		}else
		{
			cout <<endl << "元素个数是奇数,最后一个单值为:" << sum;
		}
	}
	cout << endl;
	return 0;
}
