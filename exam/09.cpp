#include <iostream>
#include <string.h>
using namespace std;

class Chislo {
private:
  int val;

public:
  Chislo() {}
  Chislo(int v) : val(v) {}
  void setval(int v) { val = v; }
  int getval() { return val; }
};

class Slovo {
private:
  Chislo chislo;
  char str[10];

public:
  Slovo() {}
  Slovo(int v, const char *s) : chislo(v) {
    chislo.setval(v);
    strcpy(str, s);
  }
  void del() {
    for (int i = chislo.getval(); i < 10; i++) {
      str[i] = str[i + 1];
    }
  }
  void print() { cout << str; }
};

int main() {
  Slovo arr[2] = {{2, "hello"}, {1, "red"}};
  for (int i = 0; i < 2; i++) {
    arr[i].del();
    arr[i].print();
  }
}
