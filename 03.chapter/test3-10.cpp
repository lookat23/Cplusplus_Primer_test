#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for(string::size_type i=0; i != s.size(); i++)
	{
		if(ispunct(s[i]))
		{
			s.erase(s.begin()+i);
			i--;
		}
	}
	cout << s << endl;
	return 0;
}
