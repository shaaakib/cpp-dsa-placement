#include <bits/stdc++.h>
using namespace std;
int main() {
    int sam=0;
    cin >> sam;
    while(sam--){
           int n;
        cin >> n;
        int k[n],c=0;
        for (int i=0; i<n; i++){
            cin >> k[i];
        }
        int p=1,cp=0;
        for(int i=0;i<n;i++){
            int sum=0,sum1=1;
            for(int j=0; j<n ; j++){
                sum=sum+k[j];
                sum1=sum1*k[j];
            }
            if(sum>=0 && sum1==1){
               break;
            }else{
                if(k[c]==-1){
                    k[c]=1;
                    cp++;
                }else{
                    k[c]=k[c];
                }
                c++;
            }
        }
        cout << cp << endl;
    }
    return 0;
}