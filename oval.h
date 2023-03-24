#pragma once
#include "shape.h"
class oval : public shape {
public:
  oval() = default;

  oval(double x, double y, const std::string &desc)
      : shape(desc), m_x_rad{x}, m_y_rad{y} {}

  virtual void draw() const override {
    std::cout << "Drawing an oval with description\t" << description << "\n";
  }

private:
  double m_x_rad{};
  double m_y_rad{};
};