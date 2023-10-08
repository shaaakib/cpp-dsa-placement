#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b , t = 1;
    char op;

    while (1) {
        cin >> a >> op >> b;

        if (op == '?') {
            break;
        }

        int result;

        if (op == '+') {
            result = a + b;
        } else if (op == '-') {
            result = a - b;
        } else if (op == '*') {
            result = a * b;
        } else if (op == '/') {
            result = a / b;
        }

        cout<<"Case "<<t++<<": "<< result << endl;
    }

    return 0;
}
