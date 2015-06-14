#include <iostream>
#include <string.h>

using namespace std;

struct stack {
	int top;
	char a[450];
} s;

void infix_to_postfix(char str[], char out[]);
void push(char);
char pop();
char top();
int precedence(char, char);
int isempty();
int isoperand(char);
int openbrace(char);
int closebrace(char);

int main()
{
	int t, k;

	cin >> t;

	char ans[t][450];

	for (k = 0; k < t; k++) {	
		s.top = -1;
		
		int i, j;
		char str[450], out[450];

		cin >> str;

		infix_to_postfix(str, out);

		strcpy(ans[k], out);
	}

	for (k = 0; k < t; k++) {
		cout << ans[k] << endl;
	}
	
	return 0;
}

void infix_to_postfix(char str[], char out[])
{
	int i, j = 0;
	char c;

	for (i = 0; i < strlen(str); i++) {
		if (isoperand(str[i])) {
			out[j++] = str[i];
		} else if (openbrace(str[i])) {
			push(str[i]);
		} else if (closebrace(str[i])) {

			if (str[i] == ')') c = '(';
			else if (str[i] == '}') c = '{';
			else if (str[i] == ']') c = '[';

			while (top() != c) {
				out[j++] = pop();
			}
			pop();
		} else {
			while (!isempty() && precedence(top(), str[i])) {
				out[j++] = pop();
			}

			push(str[i]);
		}
	}

	while (!isempty()) {
		out[j++] = pop();
	}

	out[j] = '\0';

	return;			
}

void push(char x)
{
	s.top = s.top + 1;
	s.a[s.top] = x;

	return;
}

char pop()
{
	char x;

	x = s.a[s.top];

	s.top = s.top - 1;
	
	return x;
}

char top()
{
	return s.a[s.top];
}

int precedence(char x, char y)
{
	if ((x == '+') && (y == '*')) {
		return 0;
	} else if ((x == '-') && (y == '*')) {
		return 0;
	} else if ((x == '+') && (y == '/')) {
		return 0;
	} else if ((x == '-') && (y == '/')) {
		return 0;
	} else if ((x == '(' || x == '{' || x == '[') && (y == '+' || y == '-' || y == '*' || y == '/' || y == '^')) {
		return 0;
	} else if ((x == '+' || x == '-' || x == '*' || x == '/') && (y == '^')) {
		return 0;
	}

	return 1;
}

int isempty()
{
	if (s.top == -1) {
		return 1;
	}

	return 0;
}

int isoperand(char x)
{
	if (x >= 'a' && x <= 'z') {
		return 1;
	}
	return 0;
}

int openbrace(char x)
{
	if (x == '(' || x == '{' || x == '[') {
		return 1;
	}

	return 0;
}

int closebrace(char x)
{
	if (x == ')' || x == '}' || x == ']') {
		return 1;
	}

	return 0;
}