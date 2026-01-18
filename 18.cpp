#include <iostream>
using namespace std;

class Num {
private:
  int val;

public:
  Num() : val(0) {}
  Num(int v) : val(v) {}
  int getval() const { return val; }
  void setval(int v) { val = v; }
};

class Arr {
private:
  int len;
  Num nums[10];

public:
  Arr() : len(0) {}
  Arr(int n, int *mas) : len(n) {
    for (int i = 0; i < len; i++) {
      nums[i] = Num(mas[i]);
    }
  }
  void print() {
    for (int i = 0; i < len; i++) {
      cout << nums[i].getval() << " ";
    }
  }
  void del() {
    int imax = 0, k = 0;
    int max;
    for (int i = 0; i < len; i++) {
      if (nums[i].getval() > nums[imax].getval()) {
        imax = i;
      }
    }
    max = nums[imax].getval();
    for (int i = 0; i < len; i++) {
      if (nums[i].getval() != max) {
        nums[k++].setval(nums[i].getval());
      }
    }
    len = k;
  }
};

int main() {
  int l;
  cin >> l;
  int m[l];
  for (auto &x : m) {
    cin >> x;
  }
  Arr arr(l, m);
  arr.del();
  arr.print();
}
