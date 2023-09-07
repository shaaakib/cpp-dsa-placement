#include <bits/stdc++.h>
using namespace std;
int main(){

    /*
     int x = 10;
     int y = 55;

      int *p;
      p = &y;

     cout<<"value of x is "<<*p<<endl;
     cout<<"address of x is "<<p<<endl;

    _______________________________________________

    ভ্যারিয়েবল যে টাইপের হবে, পয়েন্টারও সে টাইপের হতে হবে
    double pi = 3.14159265358;

    int *ptr; //W

    ptr = &pi;

    cout<<"value of x is "<<*ptr<<endl;
    cout<<"address of x is "<<ptr<<endl;

    

   int x = 10;
   int *p;
   p = &x;

  // পয়েন্টারের মান পরিবর্তন
  
   cout<<"Value of x:"<<x<<endl;
    cout<<"Adress of x:"<<&x<<endl;
   cout<<"Value of x:"<<p<<endl;

   *p = 20;

   cout<<"Value of x:"<<x<<endl;
   cout<<"Adress of x:"<<&x<<endl;
   cout<<"Value of x:"<<p<<endl;

   */

  int x = 10;
  int *p;

  cout<<"Value of x: "<<x<<endl;

  p = &x;
  *p = 20;

  cout<<"Value of x: "<<x<<endl;

  x = 15;

  cout<<"Value of x: "<<x<<endl;
  cout<<"Value stored at location "<<p<<" "<<*p<<endl;

  cout<<"Adress of x: "<<&x<<endl;
  cout<<"Value of p: "<<p<<endl;




    return 0;
}