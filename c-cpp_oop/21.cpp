#include <iostream>
using namespace std;

class Num {
protected:
  int val;

public:
  Num() {}
  Num(int v) : val(v) {}
  int geti() const { return val; }
  void setval(int v) { val = v; }
};

class Chisla : public Num {
private:
  float ch;

public:
  Chisla() {}
  Chisla(int a, float b) : Num(a), ch(b) {}
  void print() { cout << ch << " "; }
  bool del() {
    if (static_cast<int>(ch) != val) {
      return true;
    } else {
      return false;
    }
  }
  float getf() { return ch; }
};

int main() {
  int n;
  cin >> n;
  Chisla arr[n];
  for (auto &x : arr) {
    int a1;
    float b1;
    cin >> a1 >> b1;
    x = Chisla(a1, b1);
  }
  int k = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i].del()) {
      arr[k++] = Chisla(arr[i].geti(), arr[i].getf());
    }
  }
  for (int i = 0; i < k; i++) {
    arr[i].print();
  }
}
