#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    bool isJolly;
    int dataNum,*data;
    vector<int> minus;

    while(cin>>dataNum)
    {
        data = new int[dataNum];
        minus.clear();
        isJolly = true;
        for(int d = 0; d < dataNum; d++)
            cin>>data[d];
        for(int i=1; i < dataNum; i++)
            minus.push_back(abs(data[i]-data[i-1]));
        sort(minus.begin(),minus.end());
        for(int i=0; i < minus.size() && isJolly; i++)
            if(minus[i] != i + 1)
                isJolly = false;
        if(isJolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
        delete[] data;
    }
    return 0;
}
