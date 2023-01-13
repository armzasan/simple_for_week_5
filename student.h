#include <iostream>

class Student {
 private:
  char *n = "arm";

 public:
  void get() {
    std::cout << n;
  }
};
