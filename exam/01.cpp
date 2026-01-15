#include <iostream>
#include <string.h>
using namespace std;

class symbol {
private:
  char x;

public:
  char getchar() { return x; }
  symbol(char x) { this->x = x; }
  void print() { cout << x; }
};
class word {
private:
  char *symbols;
  int len;

public:
  word(const char *s) {
    len = strlen(s);
    symbols = new char[len + 1];
    strcpy(symbols, s);
  }
  ~word() { delete[] symbols; }
  void print() { cout << symbols; }
  int count(char x) {
    int count = 0;
    for (int i = 0; i < len; i++) {
      if (symbols[i] == x) {
        count++;
      }
    }
    return count;
  }
};
int main() {
  char c;
  char wr[256];
  cin >> c;
  cin >> wr;
  word w(wr);
  cout << w.count(c);
}
