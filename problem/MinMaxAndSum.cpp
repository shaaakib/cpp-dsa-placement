#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int min = 1000123;
    int max = -1000123;
    long long sum = 0;

    cin>>n;
    for(int i= 0; i<n; i++){
        int a;
        cin>>a;
        if(a<min){
            min = a;
        }
        if(a > max){
            max = a;
        }

        sum += a;
    }

    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}