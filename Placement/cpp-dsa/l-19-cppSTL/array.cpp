#include <iostream>
using namespace std;
#include <array>

int main() {
  array<int, 4> a = {1, 2, 3, 4};
  int size = a.size();

  for (int i = 0; i < size; i++) {
    cout << a[i] << endl;
  }
  cout << "Elememt at 2nd Index-> " << a.at(2) << endl;
  cout << "Empty or not-> " << a.empty() << endl;

  cout << "First Element -> " << a.front() << endl;
  cout << "last element -> " << a.back() << endl;
}