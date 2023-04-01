#pragma once
#include <iostream>
#include <string>

class shape {
public:
  shape() { std::cout << "Base constructor called\n"; };
  shape(const std::string &d) : description{d} {
    std::cout << "Base constructor called\n";
    ++m_count;
  }

  virtual void draw() const = 0;

  static int m_count;
  virtual const int get_count() const { return m_count; }

protected:
  std::string description{""};
};

int shape::m_count = 0;