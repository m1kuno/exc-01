#include <iostream>
using namespace std;

class Num {
private:
  int val;

public:
  Num() {}
  Num(int v) : val(v) {}
  int getval() const { return val; }
  void setval(int v) { val = v; }
};

class Arr {
private:
  Num arr[10];
  int len;

public:
  Arr() {}
  Arr(int n, int *mas) : len(n) {
    for (int i = 0; i < len; i++) {
      arr[i].setval(mas[i]);
    }
  }
  void print() {
    for (int i = 0; i < len; i++) {
      cout << arr[i].getval() << " ";
    }
  }
  void del(int tar) {
    int k = 0;
    for (int i = 0; i < len; i++) {
      if (arr[i].getval() != tar) {
        arr[k++] = arr[i];
      }
    }
    len = k;
  }
};

int main() {
  int n;
  cin >> n;
  int mas[n];
  for (int i = 0; i < n; i++) {
    cin >> mas[i];
  }
  Arr arr(n, mas);
  int t;
  cin >> t;
  arr.del(t);
  arr.print();
}
