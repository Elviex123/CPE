//cpe-29
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string a, b;
	int i, t;
	while (getline(cin, a))
	{
		getline(cin, b);
		string re[1000] = { "" };
		for (i = 0; i < a.length(); i++)
		{
			for (t = 0; t < b.length(); t++)
			{
				if (a[i] == b[t])
				{
					re[i] = a[i];
					b.erase(t, 1);
					break;
				}
			}
		}
		sort(re, re + 1000);
		for (i = 0; i < 1000; i++)
		{
			cout << re[i];
		}
		cout << endl;
	}
	return 0;
}


