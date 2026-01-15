#include <iostream>
using namespace std;

class Len {
private:
  int val;

public:
  Len() {}
  Len(int v) : val(v) {}
  void setval(int v) { val = v; }
  int getval() { return val; }
};
class Farr {
private:
  float *arr;
  Len len;

public:
  Farr(float *mas, Len &l) : len(l) {
    arr = new float[len.getval()];
    for (int i = 0; i < len.getval(); i++) {
      arr[i] = mas[i];
    }
  }
  int k = 0;
  ~Farr() { delete[] arr; }
  void print() {
    for (int i = 0; i < len.getval() - k; i++) {
      cout << arr[i];
    }
    cout << endl;
  }
  void newarr(int target) {
    for (int i = 0; i < len.getval(); i++) {
      if (target == static_cast<int>(arr[i])) {
        arr[k] = arr[i];
        k++;
      }
    }
  }
};
int main() {
  int n, target;
  cin >> n >> target;
  float *temp = new float[n];
  for (int i = 0; i < n; i++) {
    cin >> temp[i];
  }
  Len len(n);
  Farr mas(temp, len);
  mas.newarr(target);
  mas.print();
}
