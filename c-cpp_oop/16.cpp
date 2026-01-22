#include <iostream>
using namespace std;

class Num {
private:
  int num;

public:
  Num() {}
  Num(int n1) : num(n1) {}
  int get_value() { return num; }
};

class mas_num {
private:
  Num n;
  int arr[5];

public:
  mas_num() {}
  mas_num(int n2, int *ar) : n(n2) {
    for (int i = 0; i < n.get_value(); i++) {
      arr[i] = ar[i];
    }
  }

  void delet() {
    int max = -99;
    for (int i = 0; i < n.get_value(); i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    int write = 0;
    for (int i = 0; i < n.get_value(); i++) {
      if (arr[i] != max) {
        arr[write++] = arr[i];
      }
    }
    for (int i = 0; i < write; i++) {
      cout << arr[i];
    }
  }
};

int main() {
  int len;
  cin >> len;
  int *massiv = new int[len];
  for (int i = 0; i < len; i++) {
    cin >> massiv[i];
  }
  mas_num r(len, massiv);
  r.delet();
}
