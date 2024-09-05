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


