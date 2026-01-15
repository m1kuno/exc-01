#include <iostream>
#include <string.h>
using namespace std;
class Num {
private:
  int value;

public:
  Num() : value(0) {}
  Num(int v) : value(v) {}
  int getval() const { return value; }
  void setval(int value) { this->value = value; }
};
class Str {
private:
  Num num;
  char arr[10];

public:
  Str() : num(0) {}
  Str(int v, const char *mas) : num(v) { strcpy(arr, mas); }
  void print() { cout << arr; }
  Num count() { return num; }
};
int main() {
  Str arr[3] = {{3, "hel"}, {5, "hello"}, {4, "qwer"}};
  int imax = 0;
  for (int i = 0; i < 3; i++) {
    if (arr[imax].count().getval() < arr[i].count().getval()) {
      imax = i;
    }
  }
  int max = arr[imax].count().getval();
  int k = 0;
  for (int i = 0; i < 3; i++) {
    if (arr[i].count().getval() != max) {
      arr[k++] = arr[i];
    }
  }
  for (int i = 0; i < k; i++) {
    arr[i].print();
  }
}
