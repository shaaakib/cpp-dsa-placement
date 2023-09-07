#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {5, 3, 2, 9, 1, 1};
   reverse (v.begin(), v.end());

   while(!v.empty()){
    cout<<v.back()<<endl;
    v.pop_back();
   };
   
    return 0;
}