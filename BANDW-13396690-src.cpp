#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string a, b;

    while (true) {
        cin>>a>>b;

        if(a=="*" && b=="*")
            break;

        if (a==b) {
            printf("0\n");
            continue;
        }

        int cnt = 0, i = -1;
        while (i < (int)a.size()) {
            int j, init_i=i;
            for (j=i+1; j < (int)b.size(); j++) {
                if (a[j]==b[j]) {
                    if (j > i+1) {
                        cnt++;
                    }
                    i = j;
                    break;
                }
            }
            if (i == -1 && j==b.size()) {
                cnt=1;
                break;
            }
            if(init_i==i && j==b.size()) {
                if (j > i+1)
                    cnt++;
                break;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
