#include <iostream>
using namespace std;

class Num {
private:
  int x;

public:
  Num(int x) { this->x = x; }
  int getx() { return x; }
  void print() { cout << x; }
};
class Mas {
private:
  int *data;
  int size;

public:
  Mas(int size) {
    this->size = size;
    data = new int[size];
  }
  Mas(const int *arr, int size) {
    this->size = size;
    data = new int[size];
    for (int i = 0; i < size; i++) {
      data[i] = arr[i];
    }
  }
  ~Mas() { delete[] data; }
  void print() {
    for (int i = 0; i < size; i++) {
      cout << data[i] << " ";
    }
  }
  int count(Num &n) {
    int count = 0;
    int c = n.getx();
    for (int i = 0; i < size; i++) {
      if (data[i] == c) {
        count++;
      }
    }
    return count;
  }
};
int main() {
  int val;
  int size;
  cin >> size;
  cin >> val;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  Num n(val);
  Mas m(arr, size);
  cout << m.count(n);
  delete[] arr;
}
