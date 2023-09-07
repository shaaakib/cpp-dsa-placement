#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {5, 3, 2, 9, 1, 1};
   reverse (v.begin(), v.end());

   for(auto u : v){
    cout<< u << " ";
   }

   cout << endl;
    return 0;
}