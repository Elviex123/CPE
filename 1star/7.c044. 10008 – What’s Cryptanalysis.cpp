#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <cstdio>
#define len 5000

using namespace std;

int main() {
    int n, length, i, j;
    char msg[len];
    char alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    int num[26] = {}; 

    cin >> n;
    cin.ignore();  
    for (i = 0; i < n; i++) {
        cin.getline(msg, len);
        length = strlen(msg);
        for (j = 0; j < length; j++) {
            if (isalpha(msg[j])) {
                num[toupper(msg[j]) - 'A']++;
            }
        }
    }


    for (i = 0; i < 25; i++) {
        for (j = 0; j < 25 - i; j++) {
            if (num[j] < num[j + 1] || (num[j] == num[j + 1] && alp[j] > alp[j + 1])) {
                swap(num[j], num[j + 1]);
                swap(alp[j], alp[j + 1]);
            }
        }
    }

    
    for (j = 0; j < 26; j++) {
        if (num[j] > 0) {
            printf("%c %d\n", alp[j], num[j]);
        }
    }

    return 0;
}

