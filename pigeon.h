#pragma once
#include "bird.h"

class pigeon : public bird {
public:
  pigeon() = default;
  pigeon(const std::string &color, const std::string &description)
      : bird{color, description} {}

  virtual void breathe() const override {
    std::cout << "pigeon with color " << wing_color << " breathes\n";
  }

  virtual void coo() { std::cout << "pigeon " << wing_color << " coo\n"; }
};