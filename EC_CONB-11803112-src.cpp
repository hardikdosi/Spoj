#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int num, t;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            int i = 0, a[50];

            while (num > 0) {
                a[i++] = num % 2;
                num = num /2;
            }

            int sum = 0, k = 0;

            for (int j = i - 1; j >= 0; j--) {
                if (a[j] == 1)
                    sum = sum + pow(2, k);

                k++;
            }

            printf("%d\n", sum);
        } else
            printf("%d\n", num);
    }

    return 0;
}
