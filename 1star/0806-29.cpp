//cpe-29
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string a, b;//��J�Φr�� 
	int i, t;//��K�� 
	while (getline(cin, a))//��J��� 
	{
		getline(cin, b);//��J���
		string re[1000] = { "" };//�O���ΰ}�C 
		for (i = 0; i < a.length(); i++)//�ϥ������j���� 
		{
			for (t = 0; t < b.length(); t++)
			{
				if (a[i] == b[t])//��쭫�ƪ��r 
				{
					re[i] = a[i];//���� 
					b.erase(t, 1);//�����Ӧr�קK���Ƨ�d 
					break;//���������ĤG�Ӱj��A �z�ѦP�W 
				}
			}
		}
		sort(re, re + 1000);//�Ƨ� 
		for (i = 0; i < 1000; i++)//��X 
		{
			cout << re[i];
		}
		cout << endl;//�O�o���� 
	}
	return 0;
}


