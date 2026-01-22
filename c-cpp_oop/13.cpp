#include <iostream>
#include <string.h>
using namespace std;
class Num {
  int val;

public:
  Num() {}
  Num(int v) : val(v) {}
  int getval() const { return val; }
  void setval(int v) { val = v; }
};
class Str {
  Num num;
  char arr[10];

public:
  Str() {}
  Str(int v, const char *mas) : num(v) { strcpy(arr, mas); }
  void print() { cout << arr; }
  char *getarr() { return arr; }
  int len() { return num.getval(); }
};
int main() {
  int n, imax = 0, k = 0;
  cin >> n;
  Str arr[n];
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    char mas[v];
    cin >> mas;
    arr[i] = Str(v, mas);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i].len() > arr[imax].len()) {
      imax = i;
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i].len() != arr[imax].len()) {
      arr[k++] = arr[i];
    }
  }
  for (int i = 0; i < k; i++) {
    arr[i].print();
  }
}
