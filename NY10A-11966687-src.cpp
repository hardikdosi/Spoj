#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int t_no;
        scanf("%d", &t_no);

        string s;
        cin >> s;

        int f = 0, cnt = 0;
        while ((f = s.find("TTT", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d %d ", t_no, cnt);

        f = 0, cnt = 0;
        while ((f = s.find("TTH", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);

        f = 0, cnt = 0;
        while ((f = s.find("THT", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);


        f = 0, cnt = 0;
        while ((f = s.find("THH", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);


        f = 0, cnt = 0;
        while ((f = s.find("HTT", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);


        f = 0, cnt = 0;
        while ((f = s.find("HTH", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);


        f = 0, cnt = 0;
        while ((f = s.find("HHT", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d ", cnt);


        f = 0, cnt = 0;
        while ((f = s.find("HHH", f)) != string::npos) {
            f++;
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
