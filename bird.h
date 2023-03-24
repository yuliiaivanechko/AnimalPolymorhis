#pragma once
#include "animal.h"

class bird : public animal {
public:
  bird() = default;
  bird(const std::string &color, const std::string &description)
      : animal{description}, wing_color{color} {}

  virtual void fly() const {
    std::cout << "bird with color " << wing_color << " flies\n";
  }

protected:
  std::string wing_color{};
};