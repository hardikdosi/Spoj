#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    while (1) {
        int t;
        queue<int> q;
        stack<int> s1, s2;

        scanf("%d", &t);

        if (t == 0)
            break;

        while (t--) {
            int x;
            scanf("%d", &x);

            q.push(x);
        }
        s1.push(0);

        while (!q.empty()) {
            if (q.front() == s1.top() + 1) {
                s1.push(q.front());
                q.pop();
            } else if (!s2.empty() && s2.top() == s1.top() + 1) {
                s1.push(s2.top());
                s2.pop();
            } else {
                s2.push(q.front());
                q.pop();
            }
        }

        int flag = 1;

        while (!s2.empty()) {
            if (s2.top() == s1.top() + 1) {
                s1.push(s2.top());
                s2.pop();
            } else {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
