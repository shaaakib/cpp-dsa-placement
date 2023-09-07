#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int cost = 0;
    int diffCount = 0;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            diffCount++;
        }
    }
    cost = diffCount;

    for (int i = 1; i < n; ++i) {
        if (a[i] != b[i] && a[i - 1] != b[i - 1] && a[i] != a[i - 1]) {
            cost--;
            i++;
        }
    }

    cout << cost << endl;

    return 0;
}
