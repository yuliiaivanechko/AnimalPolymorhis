#include "cat.h"
#include "circle.h"
#include "crow.h"
#include "dog.h"
#include "pigeon.h"
#include <iostream>

class Base {

public:
  Base() { std::cout << "Base contr\n"; };
  Base(int g) : b{g} {}
  virtual void setb() {
    b = 20;
    std::cout << "Base " << b << std::endl;
  }

private:
  int b{};
};

class Derived : public Base {
public:
  Derived(int e, int f) : b{e}, c{f} {}
  Derived() { std::cout << "Derived contr\n"; };

  virtual void setb() override {
    b = 40;
    std::cout << "Derived: " << b << std::endl;
  }

private:
  int b{};
  int c{};
};

int main() {
  shape *s = new circle(4.5, "best_circle");

  return 0;
}