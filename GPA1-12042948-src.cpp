#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int points(float);
int attendance(float);

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int credit_tot = 0, flag = 1;
        float f, att, gpa = 0;
        int credit[6], point[6];

        for (int i = 0; i < 6; i++) {
            scanf("%d", &credit[i]);
            credit_tot += credit[i];
        }

        for (int i = 0; i < 6; i++) {
            string str1, str2, str3;
            float total = 0, val1, val2, val3;

            cin >> str1 >> str2 >> str3 >> f >> att;

            if (str1 == "ab") val1 = 0;
            else val1 = atof(str1.c_str());

            if (str2 == "ab") val2 = 0;
            else val2 = atof(str2.c_str());

            if (str3 == "ab") val3 = 0;
            else val3 = atof(str3.c_str());

            if (min(val1, min(val2, val3)) == val1) {
                total = (val2 + val3) * 9/8 + attendance(att) + f/2;
            } else if (min(val1, min(val2, val3)) == val2) {
                total = (val1 + val3) * 9/8 + attendance(att) + f/2;
            } else {
                total = (val2 + val1) * 9/8 + attendance(att) + f/2;
            }

            point[i] = points(total);

            if (point[i] == 0)
                flag = 0;
        }

        for (int i = 0; i < 6; i++)
            gpa = gpa + point[i] * credit[i];

        gpa = gpa / credit_tot;

        if (flag == 0) {
            printf("FAILED, %.2f\n", gpa);
        } else {
            printf("PASSED, %.2f\n", gpa);
        }
    }

    return 0;
}

int attendance(float x)
{
    if (x < 51)
        return 5;
    else if (x < 61)
        return 4;
    else if (x < 71)
        return 3;
    else if (x < 81)
        return 2;
    else if (x < 91)
        return 1;
    else
        return 0;
}

int points(float x)
{
    if (x >= 91)
        return 10;
    else if (x >= 81)
        return 9;
    else if (x >= 71)
        return 8;
    else if (x >= 61)
        return 7;
    else if (x > 50)
        return 6;
    else if (x == 50)
        return 5;
    else
        return 0;
}
