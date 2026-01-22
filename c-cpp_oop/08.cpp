#include <iostream>
using namespace std;

class Intag {
protected:
  int v1;

public:
  int getval() const { return v1; }
  void setval(int v) { v1 = v; }
  Intag() {}
  Intag(int v) : v1(v) {}
};
class Chisla : public Intag {
private:
  float v2;

public:
  Chisla() {}
  Chisla(int a, float b) : Intag(a), v2(b) {}
  int sum() { return v1 * v2; }
  void print() { cout << v1 << ' ' << v2; }
};

int main() {
  int c, n;
  cin >> c;
  float f;
  Chisla mas[c];
  for (auto &x : mas) {
    cin >> n >> f;
    x = Chisla(n, f);
  }
  int imax = 0;
  for (int i = 0; i < c; i++) {
    if (mas[imax].sum() < mas[i].sum()) {
      imax = i;
    }
  }

  for (int i = imax; i < c; i++) {
    mas[i++] = mas[i];
  }
  for (int i = 0; i < c - 1; i++) {
    mas[i].print();
    cout << endl;
  }
}
