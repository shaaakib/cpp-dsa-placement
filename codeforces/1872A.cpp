#include <bits/stdc++.h>
using namespace std;
int t, a, b, c;
int main (){
    cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    int diff = abs(a - b); c *= 2;
    cout << (diff + c - 1) / c << '\n';
  }
    return 0;
}