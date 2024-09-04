//cpe-47
#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	while((x %= y) && (y %= x));
	return x+y;
}
int main()
{
	int n,i,j,g;
	while(cin>>n)
	{
		if(n == 0)
		{
			break;
		}
		g=0;
		for(i=1; i<n; i++)
		{
			for(j=i+1; j<=n; j++)
			{
				g += gcd(j,i);
			}
		}
		cout << g << endl;
	}
}


