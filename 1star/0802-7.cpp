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
    char alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 將陣列大小設為27，以包括結束的空字符
    int num[26] = {}; // 初始化為0的數組

    cin >> n;
    cin.ignore();  // 忽略緩衝區中的換行符
    for (i = 0; i < n; i++) {
        cin.getline(msg, len);
        length = strlen(msg);
        for (j = 0; j < length; j++) {
            if (isalpha(msg[j])) {
                num[toupper(msg[j]) - 'A']++;
            }
        }
    }

    // 按頻率排序，同頻率按字母順序排序
    for (i = 0; i < 25; i++) {
        for (j = 0; j < 25 - i; j++) {
            if (num[j] < num[j + 1] || (num[j] == num[j + 1] && alp[j] > alp[j + 1])) {
                swap(num[j], num[j + 1]);
                swap(alp[j], alp[j + 1]);
            }
        }
    }

    // 輸出結果
    for (j = 0; j < 26; j++) {
        if (num[j] > 0) {
            printf("%c %d\n", alp[j], num[j]);
        }
    }

    return 0;
}

