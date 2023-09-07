#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {5, 3, 2, 9, 1, 1};
   //sort (v.begin(), v.end());
   //sort (v.begin()+1, v.begin()+5);
   //sort (v.begin(), v.end(), greater<int>());
   sort (v.rbegin(), v.rend());

   for(auto u : v){
    cout<< u << " ";
   }

   cout << endl;
    return 0;
}