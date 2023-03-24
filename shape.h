#pragma once
#include <iostream>
#include <string>

class shape {
public:
  shape() = default;
  shape(const std::string &d) : description{d} {}

  virtual void draw() const {
    std::cout << "shape draw called, drawing with description\t" << description
              << "\n";
  }

  void draw(double a) const { std::cout << a << std::endl; }

protected:
  std::string description{""};
};