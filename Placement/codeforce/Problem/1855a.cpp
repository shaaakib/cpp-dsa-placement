#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
  int n, sum = 0;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
   }

    int cnt = 0;
   for(int i = 0; i<n; i++){
     if((i+1) == arr[i]){
        cnt++;
     }
   }

   if(cnt%2!=0){
    cnt++;
   }
      cout<<cnt/2<<endl;

    }
}