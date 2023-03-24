#pragma once
#include "bird.h"

class crow : public bird {
public:
  crow() = default;
  crow(const std::string &color, const std::string &description)
      : bird{color, description} {}

  virtual void breathe() const override {
    std::cout << "crow with color " << wing_color << " breathes\n";
  }

  virtual void cow() { std::cout << "crew " << wing_color << " cow\n"; }
};