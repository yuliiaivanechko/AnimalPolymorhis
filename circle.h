#pragma once
#include "oval.h"

class circle : public oval {
public:
  circle() { ++m_count; };
  circle(double rad, const std::string &description)
      : oval(rad, rad, description) {
    ++m_count;
  }
  virtual void draw() const override {
    std::cout << "Drawing a circle with description\t " << description << "\n ";
  }

  virtual const int get_count() const override { return m_count; }

  static int m_count;
};
int circle::m_count{};