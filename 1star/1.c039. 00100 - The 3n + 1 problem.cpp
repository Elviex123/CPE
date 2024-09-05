//cpe-1
#include <iostream>
using namespace std;
int cl(int n)
{
	if (n==1)
	{
		return 1;
	}
	else if (n%2==1)
	{
		return cl(3*n+1)+1;
	}
	else 
	{
		return cl(n/2)+1;
	}
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int l=min(a, b);
		int r=max(a, b);
		int mx=0;
		for (int i=l; i<=r; i++)
		{
			mx=max(mx, cl(i));
		}
		cout << a <<" "<< b <<" "<< mx <<endl;
	}
}

/*題目解析：
1.輸入一個整數 n。
2.輸出 n。
3.如果 n 等於 1，則停止。
4.如果 n 是奇數，則將 n 更新為 3n + 1。
5.如果 n 是偶數，則將 n 更新為 n/2。
6.重複步驟 2。 */
