#include <iostream>
using namespace std;

class Fl {
  float f;

public:
  Fl() {};
  Fl(float ff) : f(ff) {}
  float get_fl() { return f; }
};

class MFl {
  Fl m[30];
  int len;

public:
  MFl() {}
  MFl(int n, Fl mm[]) : len(n) {
    for (int i = 0; i < len; i++) {
      m[i] = mm[i];
    }
  }
  void delete_int() {
    for (int i = 0; i < len; i++) {
      m[i] = m[i].get_fl() - static_cast<int>(m[i].get_fl());
    }
  }
  void Print() {
    for (int i = 0; i < len; i++) {
      cout << m[i].get_fl() << endl;
    }
  }
};

int main() {
  srand(time(NULL));
  Fl m[30];
  MFl M;
  int n;
  cout << "Введите количество элементов: ";
  cin >> n;
  cout << "Исходный массив" << endl;
  for (int i = 0; i < n; i++) {
    m[i] = Fl(static_cast<float>(rand() % 100) / 10);
    cout << m[i].get_fl() << endl;
  }
  M = MFl(n, m);
  M.delete_int();
  cout << "Новый массив" << endl;
  M.Print();
  return 0;
}
