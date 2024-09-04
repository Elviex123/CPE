//cpe-33
#include <iostream>
#include <string>
#include <map>
using namespace std; 
int main() 
{
	map<string, int> C;
	int times = 0;
	cin >> times;
	while (times--) 
	{
	string country, name = "";
	cin >> country;
	getline(cin,name);
	C[country]++; 
	}
	for (map<string, int>::iterator i = C.begin(); i != C.end(); i++) 
	{
		cout << i->first << " " << i->second << endl;
	}
	return 0;
}

 

