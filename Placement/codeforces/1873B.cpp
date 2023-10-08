#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int sml = arr[0]; 
        int sIdx = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] < sml){
                sml = arr[i];
                sIdx = i;
            }
        }

        arr[sIdx] += 1;

        int multi = 1;
        for(int i = 0; i < n; i++){
            multi *= arr[i];
        }
        cout<<multi<<endl;
    }

    return 0;
}
