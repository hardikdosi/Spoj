#include <cstdio>
#include <limits.h>

using namespace std;

void merge(int a[], int p, int q, int r);
void merge_sort(int a[], int p, int r);

int main()
{
    int t, sum, n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = 0;
        }

        merge_sort(a, 0, n - 1);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] == 2 * a[i] && b[j] == 0 && b[i] == 0)
                    b[i] = b[j] = 1;
            }
        }

        sum = 0;
        for (int i = 0; i < n; i++)
            sum += b[i];

        printf("%d\n", sum / 2);
    }
}

void merge_sort(int a[], int p, int r)
{
    if (p < r) {
        int q = (p + r) / 2;

        merge_sort(a, p, q);
        merge_sort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

void merge(int a[], int p, int q, int r)
{
    int n1, n2;

    n1 = q - p + 1;
    n2 = r - q;

    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++)
        L[i] = a[p + i];

    for (int i = 0; i < n2; i++)
        R[i] = a[q + i + 1];

    L[n1] = R[n2] = INT_MAX;

    int i = 0, j = 0;

    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
    }
}
