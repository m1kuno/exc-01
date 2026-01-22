#include <iostream>
using namespace std;

class Simvol {
private:
  char sim;

public:
  Simvol() {}
  Simvol(char s) : sim(s) {}
  char getsim() { return sim; }
  void setsim(char s) { sim = s; }
};

class Str {
private:
  Simvol ch[10];
  int len;
  char str[11];

public:
  Str() : len(0) {}
  Str(int l, char c) : len(l) {
    for (int i = 0; i < len; i++) {
      ch[i] = Simvol(c);
    }
  }
  char *tsrt() {
    for (int i = 0; i < len; i++) {
      str[i] = ch[i].getsim();
    }
    str[len] = '\0';
    return str;
  }
  void print() {
    tsrt();
    cout << str;
    // for (int i = 0; i < len; i++) {
    //  cout << ch[i].getsim();
    //}
    cout << " ";
  }
};

int main() {
  int n;
  cin >> n;
  Str arr[n];
  for (int i = 0; i < n; i++) {
    int v;
    char a;
    cin >> v >> a;
    arr[i] = Str(v, a);
  }
  for (int i = 0; i < n; i++) {
    arr[i].print();
  }
}
