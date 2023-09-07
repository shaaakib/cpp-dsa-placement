#include <bits/stdc++.h>
using namespace std;

int main(){
   int a[] = {2, 1, 5, 9, 1, 1};

   sort (a, a+3, greater<int>());

   for(int i = 0; i<3; i++){
    cout<< a[i] << " ";
   }

   cout << endl;
    return 0;
}