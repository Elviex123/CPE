#include <bits/stdc++.h>
using namespace std;
#define AND &&
#define OR ||

struct dictionary 
{
    char ch;
    int num;
} 
dic[50] = {{.ch = '\0', .num=0}};

bool comp (dictionary a, dictionary b) 
{
    if (a.num == b.num) return a.ch<b.ch;
    else return a.num>b.num;
}

main ()//注意 
{
    cin.tie(0); cout.sync_with_stdio(false);
    int N; cin>>N;
    N++;
    while (N--)
	{
        string str; getline(cin, str);
        for (int i=0; i<str.length(); i++) 
		{
            if (str[i] >= 'A' AND str[i] <= 'Z') 
			{
                dic[str[i]-'A'].num ++;
                dic[str[i]-'A'].ch = str[i];
            }
			else if(str[i] >= 'a' AND str[i] <= 'z')
			{
                dic[str[i]-'a'].num ++;
                dic[str[i]-'a'].ch = str[i]-'a'+'A';
            }
            else continue;
        }
    }
    sort(dic, dic+50, comp);
    for (int i=0; i<50; i++) 
	{
        if (dic[i].num == 0) break;
        cout<<dic[i].ch<<" "<<dic[i].num<<endl;
    }
}

 
