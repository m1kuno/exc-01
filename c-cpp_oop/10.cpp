#include <iostream>
using namespace std;

class Num {
private:
  int val;

public:
  Num() {}
  Num(int v) : val(v) {}
  int getval() { return val; }
  void setval(int v) { val = v; }
};

class Chisla {
private:
  Num n;
  float arr[100];
  int k;

public:
  Chisla() {}
  Chisla(int v, float *mas) : n(v) {
    for (int i = 0; i < n.getval(); i++) {
      arr[i] = mas[i];
    }
  }
  void del(int target) {
    k = 0;
    for (int i = 0; i < n.getval(); i++) {
      if (static_cast<int>(arr[i]) != target) {
        arr[k] = arr[i];
        k++;
      }
    }
  }
  void print() {
    for (int i = 0; i < k; i++) {
      cout << arr[i] << ' ';
    }
  }
};

int main() {
  int n;
  cin >> n;
  float mas[n];
  for (auto &x : mas) {
    cin >> x;
  }
  Chisla arr(n, mas);
  arr.del(2);
  arr.print();
}
