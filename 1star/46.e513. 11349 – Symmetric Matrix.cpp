#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		char c1,c2;
		long long m=0, st=0, ne=0;
		cin>>c1>>c2>>m;
		long long martix[m][m];
		for (int j=0; j<m; j++)
			for (int k=0; k<m; k++)
			{
				cin>>martix[j][k];
				if(martix[j][k]<0)
					ne++;
			}
			for (int j=0; j<m; j++)
				for (int k=0; k<m; k++)
					if(martix[j][k] != martix[abs(m-1-j)][abs(m-1-k)])
						st++;
			if(st>1||ne>0)
				cout<<"Test #"<<i+1<<": Non-symmetric."<<endl;
			else
				cout<<"Test #"<<i+1<<": Symmetric."<<endl;
	}
	return 0;
}

