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
    bool first_output = false;  // �Ω󱱨�h���J��������

    while (fgets(qu, sizeof(qu), stdin) != NULL) {  // �ϥ� fgets �N�� gets
        if (first_output) {
            printf("\n");
        }
        first_output = true;

        // ��l�� temp �}�C
        for (i = 0; i < 130; i++) {
            temp[i] = 0;
        }

        // �p��C�Ӧr�Ū��X�{����
        for (i = 0; i < strlen(qu); i++) {
            temp[(int)qu[i]]++;
        }

        // ��R ans �}�C
        for (i = 32, j = 0; i < 128; i++) {
            if (temp[i]) {
                ans[j].code = i;  // �ץ�: ���ӬO ans[j].code = i �Ӥ��O 1
                ans[j].time = temp[i];
                j++;
            }
        }

        // �Ƨ� ans �}�C
        sort(ans, ans + j, cmp);

        // ��X���G
        for (i = 0; i < j; i++) {
            printf("%d %d\n", ans[i].code, ans[i].time);
        }
    }

    return 0;
}

