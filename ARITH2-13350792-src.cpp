#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;

ll evaluate(ll x, ll y, char op)
{
    if (op == '+')
        return x+y;
    else if (op == '-')
        return x-y;
    else if (op == '*')
        return x*y;
    else if (op =='/')
        return x/y;
}

int main()
{
    int t;
    scanf("%d", &t);

    ll op1, op2;
    char op;
    while (t--) {
        printf("\n");
        scanf("%lld", &op1);
        up:
        scanf("%c", &op);
        if (op == '\n' || op == ' ') goto up;
        while (op != '=') {
            scanf("%lld", &op2);
            op1 = evaluate(op1, op2, op);
            up1:
            scanf("%c", &op);
            if (op == '\n' || op == ' ') goto up1;
        }
        printf("%lld\n", op1);
    }
    return 0;
}
