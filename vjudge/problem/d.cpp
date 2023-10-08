#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> balloonHeights(n);

    for (int i = 0; i < n; ++i) {
        cin >> balloonHeights[i];
    }

    sort(balloonHeights.begin(), balloonHeights.end());

    int shots = 0;
    int arrowHeight = 0;
    for (int i = 0; i < n; ++i) {
        if (balloonHeights[i] > arrowHeight) {
            shots++;
            arrowHeight = balloonHeights[i];
        }
        arrowHeight--;
    }

    cout << shots << endl;

    return 0;
}
