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
    bool first_output = false;  

    while (fgets(qu, sizeof(qu), stdin) != NULL) { 
        if (first_output) {
            printf("\n");
        }
        first_output = true;

        
        for (i = 0; i < 130; i++) {
            temp[i] = 0;
        }

        
        for (i = 0; i < strlen(qu); i++) {
            temp[(int)qu[i]]++;
        }

        
        for (i = 32, j = 0; i < 128; i++) {
            if (temp[i]) {
                ans[j].code = i;  
                ans[j].time = temp[i];
                j++;
            }
        }

        
        sort(ans, ans + j, cmp);

    
        for (i = 0; i < j; i++) {
            printf("%d %d\n", ans[i].code, ans[i].time);
        }
    }

    return 0;
}

