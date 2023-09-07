#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();

        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << "(";
            for (int i = 1; i <= n; i++) {
                cout << "(";
            }
            for (int i = 1; i <= n; i++) {
                cout << ")";
            }
            cout << ")" << endl;
        }
    }

    return 0;
}
