#include <iostream>
using namespace std;
class Num {
  int value;

public:
  Num() {}
  Num(int v) : value(v) {}
  int getval() const { return value; }
  void setval(int v) { value = v; }
};
class Arr {
  Num num;
  float arr[20];

public:
  Arr() {}
  Arr(int v, float *mas) : num(v) {
    for (int i = 0; i < num.getval(); i++) {
      arr[i] = mas[i];
    }
  }
  void print() {
    for (int i = 0; i < num.getval(); i++) {
      cout << arr[i] << endl;
    }
  }
  void change() {
    int imax = 0;
    float t;
    for (int i = 0; i < num.getval(); i++) {
      if (arr[i] > arr[imax]) {
        imax = i;
      }
    }
    t = arr[0];
    arr[0] = arr[imax];
    arr[imax] = t;
  }
};
int main() {
  int v;
  cin >> v;
  float mas[v];
  for (auto &x : mas) {
    cin >> x;
  }
  Arr arr(v, mas);
  arr.change();
  arr.print();
}
