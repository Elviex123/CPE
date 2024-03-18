#include <iostream>
using namespace std;
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		int x1=N;
		int b1=0;
		while(x1)
		{
			b1 += x1&1;
			x1 >>=1;
		}
		int x2=0;
		int mul=1;
		x1=N;
		while(x1)
		{
			x2 += (x1%10)*mul;
			x1 /= 10;
			mul *= 16; 
		}
		int b2=0;
		while(x2)
		{
			b2 += x2 & 1;
			x2 >>=1;
		}
		cout <<b1<<" "<<b2<<"\n";
	}
	return 0;
}