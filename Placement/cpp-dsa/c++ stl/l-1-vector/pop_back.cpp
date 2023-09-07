#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2, 3, 4, 5};

   cout<<v.back() <<endl;
   v.pop_back();

   
   cout<< v.back()<<endl;
   cout<< *v.begin()<<endl;
    return 0;
}