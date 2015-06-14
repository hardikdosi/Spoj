#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    int count_o, count_c, k = 1;

    while (1) {
        count_o = count_c = 0;

        cin >> str;

        if (str[0] == '-')
            break;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '{')
                s.push(str[i]);
            else if (str[i] == '}') {
                if (s.empty())
                    count_c++;
                else if (s.top() == '{')
                    s.pop();
            }
        }

        while (!s.empty()) {
            count_o++;
            s.pop();
        }

        if (count_c % 2 == 0 && count_o % 2 == 0)
            cout << k++ << ". " << (count_c + count_o) / 2 << endl;
        else {
            if (count_c > count_o)
                cout << k++ << ". " << count_c / 2  + count_o / 2 + 2 << endl;
            else
                cout << k++ << ". " << count_o / 2 + count_c / 2 + 2 << endl;
        }
    }

    return 0;
}
