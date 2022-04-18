#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t=20;
	while(t>0)
	{
	int a, k =0;
	cout << "Nhap a: "; cin >> a;
	vector<string> result;
	for (int i=0;i<a;i++)
	{
		string tg;
		int t = (a/2-i);
		while(t>0)
		{
			tg += " ";
			t--;
		}
		if(2*i+1<=a)
		for (int j=0;j<(2*i+1);j++)
		{
			tg += "*";
		}
		result.push_back(tg);
	}
	for(int i=0;i<a/2+1;i++)
		cout << result[i] << "\n"; 
	for(int i=a/2-1;i>=0;i--)
		cout << result[i] << "\n";
	}
}
