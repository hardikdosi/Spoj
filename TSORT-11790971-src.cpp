#include <cstdio>
#include <limits.h>

using namespace std;

void merge(int a[], int p, int q, int r);
void merge_sort(int a[], int p, int r);

int main()
{
    int t;
    scanf("%d", &t);

    int a[t];
    for (int i = 0; i < t; i++)
        scanf("%d", &a[i]);

    merge_sort(a, 0, t - 1);

    for (int i = 0; i < t; i++)
        printf("%d\n", a[i]);

    return 0;
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
