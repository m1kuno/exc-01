#include <iostream>
using namespace std;

class Num {
private:
  int val;

public:
  Num() {}
  Num(int x) : val(x) {}
  int getval() { return val; }
};

class Arr {
private:
  int len = 10;
  Num arr[10];

public:
  Arr() {}
  Arr(Num *n) {
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
        arr[j] = arr[i];
        j++;
      }
    }
    len = j;
  }

  void print() {
    for (int i = 0; i < len; i++) {
      cout << arr[i].getval();
    }
  }
};

int main() {
  Num mas[10] = {1, 4, 5, 5, 2, 3, 1, 5, 1, 4};
  Arr myarr(mas);
  myarr.newarr();
  myarr.print();
}
