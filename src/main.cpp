#include <iostream>

class A {
public:
  A(int a, int b) : a(a), b(b) {}
  int a, b;
};

int main() {
  A b(2,3);
  for (int i = 0; i < 1000000; i++) {
    std::cout << b.b << std::endl;
  }

  return EXIT_SUCCESS;
}
