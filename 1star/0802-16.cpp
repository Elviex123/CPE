#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

struct word {
    int code, time;
};

bool cmp(struct word a, struct word b) {
    if (a.time != b.time)
        return a.time < b.time;
    else
        return a.code > b.code;
}

int main(void) {
    int i, j, temp[130];
    char qu[1005];
    struct word ans[130];
    bool first_output = false;  // 用於控制多行輸入間的換行

    while (fgets(qu, sizeof(qu), stdin) != NULL) {  // 使用 fgets 代替 gets
        if (first_output) {
            printf("\n");
        }
        first_output = true;

        // 初始化 temp 陣列
        for (i = 0; i < 130; i++) {
            temp[i] = 0;
        }

        // 計算每個字符的出現次數
        for (i = 0; i < strlen(qu); i++) {
            temp[(int)qu[i]]++;
        }

        // 填充 ans 陣列
        for (i = 32, j = 0; i < 128; i++) {
            if (temp[i]) {
                ans[j].code = i;  // 修正: 應該是 ans[j].code = i 而不是 1
                ans[j].time = temp[i];
                j++;
            }
        }

        // 排序 ans 陣列
        sort(ans, ans + j, cmp);

        // 輸出結果
        for (i = 0; i < j; i++) {
            printf("%d %d\n", ans[i].code, ans[i].time);
        }
    }

    return 0;
}

