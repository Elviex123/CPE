#include <iostream>
using namespace std;

int go (string str)
{
    if (str.length() == 1) return int(str[0] - '0');
    else
    {
        int sum = 0;
        for (int i = 0; i<str.length(); i++)
        {
            sum += int(str[i] - '0');
        }
        string tmp = to_string(sum);
        if (tmp.length() == 1) return int(tmp[0] - '0');
        else return go(tmp);
    }
}

int main() {
    string str;
    while (cin >> str)
    {
        if (str == "0") break;
        else
        {
            cout << go(str) << endl;
        }
    }
}
