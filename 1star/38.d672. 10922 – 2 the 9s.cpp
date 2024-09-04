//cpe-38
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char x[10000];
    while(cin>>x)
	{
    	if(strcmp(x,"0")==0) 
			break;
    	int y=1,sum=0,s=strlen(x);
   		for(int i=0;i<s;i++) 
			sum+=x[i]-'0';
  		while(!(sum%9))
		{
    		if(sum==9) 
				break;  
      		int sum1=0;
    		while(sum){sum1+=sum%10,sum/=10;}             
      			sum=sum1,y++;
    
      	}            
   	if(sum%9) 
   		cout<<x<<" is not a multiple of 9.";
   	else 
   		cout<<x<<" is a multiple of 9 and has 9-degree "<<y<<".";
  		cout<<"\n";
	}
}      

 
