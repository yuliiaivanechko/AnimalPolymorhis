#pragma once
#include "oval.h"

class circle : public oval {
public:
  circle() = default;
  circle(double rad, const std::string &description)
      : oval(rad, rad, description) {}
  virtual void draw() const override {
    std::cout << "Drawing a circle with description\t" << description << "\n";
  }
};