#include <iostream>
#include <string.h>
using namespace std;

class Num {
private:
  int val;

public:
  Num() {}
  Num(int x) : val(x) {}
  int getval() { return val; }
  void print() { cout << val; }
};

class Word {
private:
  char str[100];
  Num id;

public:
  Word() : id(0) {}
  Word(char *str, int x) {
    id = x;
    strcpy(this->str, str);
  }
  int getid() { return id.getval(); }
  char *getstr() { return str; }
  void print() { cout << str; }

  void newstr() {
    int len = strlen(str);
    int tar = id.getval();
    for (int i = tar; i < len - 1; i++) {
      str[i] = str[i + 1];
    }
    str[len - 1] = '\0';
  }
};
int main() {
  Word arr[2] = {Word("qwer", 2), Word("asdf", 1)};
  for (int i = 0; i < 2; i++) {
    arr[i].newstr();
  }
  for (int i = 0; i < 2; i++) {
    arr[i].print();
  }
}
