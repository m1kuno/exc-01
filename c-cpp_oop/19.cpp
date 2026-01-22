#include <iostream>
#include <string.h>
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

class Str {
private:
  Num len;
  char arr[10];

public:
  Str() {}
  Str(int n, char *mas) : len(n) { strcpy(arr, mas); }
  void print() { cout << arr; }
  int getlen() { return len.getval(); }
};

int main() {
  int l;
  cin >> l;
  Str m[l];
  for (int i = 0; i < l; i++) {
    int n;
    char str[10];
    cin >> n >> str;
    m[i] = Str(n, str);
  }
  int k = 0;
  for (int i = 0; i < l; i++) {
    if (m[i].getlen() % 2 != 0) {
      m[k++] = m[i];
    }
  }
  l = k;
  for (int i = 0; i < k; i++) {
    m[i].print();
    cout << " ";
  }
}
