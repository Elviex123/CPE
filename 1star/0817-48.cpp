//cpe-48
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0 && b==0)
		{
			break;
		}
		else
			cout<<floor(sqrt(b)-ceil(sqrt(a))+1)<<endl;
	}
}
//ceil: > or = x 的最小整數 
//floor:< or = x 的最小整數 
//sqrt:開根號

