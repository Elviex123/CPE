//cpe-3
#include<iostream>
using namespace std;
int main()
{
    int n=1;
    char c;
    while(cin.get(c))
	{
        if(c=='"')
            if(n++%2) 
				cout<<"``"; 
			else cout<<"''";
            else cout<<c;
    }
}
//get:接收一行字串，可包含空格
 
