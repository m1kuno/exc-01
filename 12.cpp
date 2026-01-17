#include <iostream>
using namespace std;
class Chislo {
  int value;

public:
  Chislo() {}
  Chislo(int v) : value(v) {}
  int getval() { return value; }
  void setval(int v) { value = v; }
};
class Arr {
  Chislo n;
  float arr[100];

public:
  Arr() {}
  Arr(int v, float *mas) : n(v) {
    for (int i = 0; i < n.getval(); i++) {
      arr[i] = mas[i];
    }
  }
  void print() {
    for (int i = 0; i < n.getval(); i++) {
      cout << arr[i] << " ";
    }
  }
  void add(float f) {
    int k = 0;
    for (int i = n.getval(); i > 0; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = f;
    n.setval(n.getval() + 1);
  }
};

int main() {
  int n;
  float f;
  cin >> n;
  float mas[n];
  for (int i = 0; i < n; i++) {
    cin >> mas[i];
  }
  Arr arr(n, mas);
  int v;
  cin >> v;
  for (int i = 0; i < v; i++) {
    cin >> f;
    arr.add(f);
  }
  arr.print();
}
