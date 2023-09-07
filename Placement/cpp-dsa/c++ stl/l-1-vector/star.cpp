#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2, 3, 4, 5};
   
   cout<< *v.begin()<<endl;

   v.erase (v.begin()+2);

   for(auto u : v){
    cout<< u << " ";
   }

   cout << endl;
    return 0;
}