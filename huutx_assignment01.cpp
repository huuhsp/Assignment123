#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int t=20;
	while(t>0)
	{
		bool check = true;
		long long a;
		cin >> a;
		stringstream ss;
		ss << a;
		string str = ss.str();
		for(int i=0; i<str.size()/2 ; i++)
		{
			if(str[i] != str[str.size()-i-1])
			{
				check = false;
				cout << "False\n";
				break;
			}
		}
		if(check!=false)
			cout << "True\n";
		t--;
	}
}
