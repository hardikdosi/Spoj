#include <cstdio>
#include <cmath>

using namespace std;

int NOR(int);
int NOD(int);

int main()
{
    int x;

    scanf("%d", &x);

    printf("%d", NOR(x));

    return 0;
}

int NOR(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int total;

    if (NOD(n) % 2 == 0)
        total = NOD(n) / 2 + NOR(n-1);
    else
        total = NOD(n) / 2 + NOR(n-1) + 1;

    return total;
}

int NOD(int k)
{
	int sum = 0;
	int x = 0;
	int i;
	int rt = sqrt(k);

	if(k == 1)
        return 1;

	for(i = 1; i <= rt; i++) {
        if(k % i ==0) {
            sum++;

            x = k / i;
            if(x != i)
                sum++;
        }
    }

    return sum;
}
