#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	if(0 == a % b)
	return b;
	return GCD(b, a % b);
}

int convert(string &bin)
{
	int sum = 0;
	int base = 1;

	for(int i = bin.length() - 1; i >= 0; --i)
	{
		sum += (bin[i] - '0') * base;
		base *= 2;
	}
	return sum;
}

int main()
{
	int T;
	while(cin >> T)
	{
		for(int i = 1; i <= T; ++i)
		{
			string A, B;
			cin >> A >> B;
		int valA = convert(A);
		int valB = convert(B);
		if(1 == GCD(valA, valB))
			cout << "Pair #" << i << ": Love is not all you need!" << endl;
		else
			cout << "Pair #" << i << ": All you need is love!" << endl;
		}
	}
	return 0;
}
