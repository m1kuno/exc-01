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
  Chisla mas[3] = {{3, 4.2}, {4, 5.3}, {2, 6.3}};
  int imax = 0;
  for (int i = 0; i < 3; i++) {
    if (mas[imax].sum() < mas[i].sum()) {
      imax = i;
    }
  }
  for (int i = 0; i < 3; i++) {
    mas[i].print();
    cout << endl;
  }
  for (int i = imax; i < 3; i++) {
    mas[i++] = mas[i];
  }
  for (int i = 0; i < 2; i++) {
    mas[i].print();
    cout << endl;
  }
}
