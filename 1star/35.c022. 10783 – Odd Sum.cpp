#include<iostream>
using namespace std;
int main()
{
	int T,a,b,time=0;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		time++;
		int sum = 0;
		for(a; a<=b;a++)
		{
			if(a%2 ==1)
				sum += a;
		}
		cout <<"Case "<<time<<": "<<sum<<endl;
	}
}
