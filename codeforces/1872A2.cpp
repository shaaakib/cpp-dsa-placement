#include<bits/stdc++.h>
using namespace std;
int main() {
	int t = 1; cin >> t;
	while(t--) {
		int a, b, c; cin >> a >> b >> c;
		a = abs(a - b);
		cout << (a + c + c - 1) / (c + c) << "\n";
	}
	return 0; 
}