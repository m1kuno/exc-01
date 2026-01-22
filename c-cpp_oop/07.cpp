#include <iostream>
using namespace std;

class Sim {
protected:
  char val;

public:
  Sim() : val('\0') {}
  Sim(char v) : val(v) {}
  char getval() const { return val; }
  void setval(char v) { val = v; }
};

class Slovo {
private:
  int n;
  Sim *arr;

public:
  Slovo() : n(0), arr(nullptr) {}

  Slovo(int l, char a) : n(l) {
    arr = new Sim[n];
    for (int i = 0; i < n; i++) {
      arr[i].setval(a);
    }
  }

  ~Slovo() { delete[] arr; }

  void print() const {
    for (int i = 0; i < n; i++) {
      cout << arr[i].getval();
    }
    cout << '\n';
  }
};

int main() {
  int count;
  cin >> count;

  Slovo **mas = new Slovo *[count];

  for (int i = 0; i < count; i++) {
    int n;
    char a;
    cin >> a >> n;
    mas[i] = new Slovo(n, a);
  }

  for (int i = 0; i < count; i++) {
    mas[i]->print();
  }

  for (int i = 0; i < count; i++) {
    delete mas[i];
  }
  delete[] mas;
  return 0;
}
