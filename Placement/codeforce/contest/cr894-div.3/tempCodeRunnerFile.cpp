#include <bits/stdc++.h>
using namespace std;

bool hasColumns(const vector<string>& carpet, int c1, int c2, int c3, int c4) {
    for (int r = 0; r < carpet.size(); ++r) {
        if (carpet[r][c1] == 'v' && carpet[r][c2] == 'i' &&
            carpet[r][c3] == 'k' && carpet[r][c4] == 'a') {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }

        bool found = false;

        for (int c1 = 0; c1 < m - 3; ++c1) {
            for (int c2 = c1 + 1; c2 < m - 2; ++c2) {
                for (int c3 = c2 + 1; c3 < m - 1; ++c3) {
                    for (int c4 = c3 + 1; c4 < m; ++c4) {
                        if (hasColumns(carpet, c1, c2, c3, c4)) {
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
