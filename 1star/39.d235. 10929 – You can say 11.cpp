//cpe-39
#include <iostream>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		if (s[0]=='0')
		{
			break;
		}
		long long sum=0;
		int sng=1;
		for (int i=0; i<s.size(); i++)
		{
			sum+=sng*(s[i]-'0');
			sng*=-1;	
		}
		if (sum%11==0)
		{
			cout << s <<" is a multiple of 11.\n";
		}
		else 
		{
			cout << s <<" is not a multiple of 11.\n";
		}	
	}
}

