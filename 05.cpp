#include <iostream>
using namespace std;

class Num {
private:
  int val;

public:
  Num() : val(0) {}
  Num(int x) : val(x) {}
  int getval() const { return val; }
  void setval(int v) { val = v; }
};

class Arr {
private:
  int len;
  Num arr[10];

public:
  Arr() : len(0) {}
  Arr(int l, Num *n) : len(l) {
    for (int i = 0; i < len; i++) {
      arr[i] = n[i];
    }
  }
  void newarr() {
    int imax = 0;
    for (int i = 0; i < len; i++) {
      if (arr[imax].getval() < arr[i].getval()) {
        imax = i;
      }
    }
    int j = 0;
    for (int i = 0; i < len; i++) {
      if (arr[imax].getval() != arr[i].getval()) {
        arr[j++] = arr[i];
      }
    }
    len = j;
  }

  void print() {
    for (int i = 0; i < len; i++) {
      cout << arr[i].getval() << " ";
    }
  }
};

int main() {
  int n, a;
  cin >> n;
  Num mas[n];
  for (auto &x : mas) {
    cin >> a;
    x = Num(a);
  }
  Arr myarr(n, mas);
  myarr.newarr();
  myarr.print();
}
