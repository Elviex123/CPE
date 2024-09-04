//cpe-22

#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		vector<int>ans;
		bool boring = false;
		if(x==0 || y==0)
			boring = true;
		else
		{
			ans.push_back(x);
			while(x>1)
			{
				if(x%y == 0)
				{
					x /= y;
					ans.push_back(x);
				}
				else
				{
					boring = true;
					break;
				}	
			}
		}
		if(boring)
			cout<<"Boring!\n";
		else
		{
			for(auto i: ans)
				cout<<i<<" ";
				cout<<"\n";
		}
	}
	return 0;
}



