#include <iostream>
using namespace std;
int main()
{
	int t, s, d;
	while(cin >> t)
	{
		while(t--)
		{
			cin >> s >> d;
			if( ((s + d) & 1) || s < d)
			cout << "impossible" << endl;
			else
			cout << (s + d) / 2 << " " << (s - d) / 2 << endl;
		}
	}
	return 0;
}

 
