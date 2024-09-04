#include<iostream>
using namespace std;
int main()
{
	int n,cola,sum;
	while(cin>>n)
	{
		if(1<=n && n <=200)
		{
			cola=n;
			while(n>=3)
			{
				sum = n/3;
				cola += sum;
				n = n%3+sum;
			}
			if(n==2)
				cola++;
				cout<<cola<<endl;
		}
	}
}
