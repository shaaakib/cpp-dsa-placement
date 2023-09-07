#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> v;
    
    vector<int> a(5, 1);

    vector<int> last(a);
   for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    cout << "Front -> " << v.front() << endl;
    cout << "Back -> " << v.back() << endl;

    cout<<"Before Pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.clear();
    cout<<"Size-> "<<v.size()<<endl;

}