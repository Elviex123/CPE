//cpe-26
#include<iostream>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
	int t;
	while(cin>>t)
	{
		getchar();
		getchar();
		for(int i=0; i<t; ++i)
		{
			map<string, int> ns;
			int total = 0;
			string input;
			while(getline(cin,input) && input != "")
				++ns[input],++total;
			for(auto it = ns.begin(); it != ns.end(); ++it)
			cout << it-> first <<" "<< fixed << setprecision(4) << (double) it -> second / total * 100 << endl;
			cout << endl;
		}
	}
	return 0;
}
