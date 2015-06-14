#include <iostream>
#include <stack>
#include <string>

using namespace std;

int crs_value(char ch);
int isdigit(char x);
char crs_chr(int x);
int MCXI_to_Decimal(string str);
void Decimal_to_MCXI(int num);

int main()
{
    string str1, str2;
    int t, num1, num2;

    cin >> t;

    while (t--) {
        cin >> str1 >> str2;

        num1 = MCXI_to_Decimal(str1);
        num2 = MCXI_to_Decimal(str2);

        Decimal_to_MCXI(num1 + num2);

        cout << "\n";
    }

    return 0;
}

int MCXI_to_Decimal(string str)
{
    stack<char> s;
    char num1, num2;
    int sum = 0;

    for (int i = str.size() - 1; i >= 0; i--)
        s.push(str[i]);

    while (!s.empty()) {
        num1 = s.top(); s.pop();

        if (isdigit(num1)) {
            num2 = s.top(); s.pop();
            sum = sum + crs_value(num2) * (num1 - '0');
        } else {
            sum = sum + crs_value(num1);
        }
    }

    return sum;
}

void Decimal_to_MCXI(int num)
{
    int i = 0, a[4];

    while (num > 0) {
        a[i] = num % 10;
        num = num / 10;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (a[j] == 1) {
            cout << crs_chr(j);
        } else if (a[j] == 0) {
            continue;
        } else {
            cout << a[j] << crs_chr(j);
        }
    }
}

char crs_chr(int x)
{
    if (x == 0)
        return 'i';
    else if (x == 1)
        return 'x';
    else if (x == 2)
        return 'c';
    else if (x == 3)
        return 'm';
}

int isdigit(char x)
{
    int y = x - '0';

    if (y >= 2 && y <= 9)
        return 1;

    return 0;
}

int crs_value(char ch)
{
    if (ch == 'm')
        return (1000);
    else if (ch == 'c')
        return (100);
    else if (ch == 'x')
        return (10);
    else
        return (1);
}
