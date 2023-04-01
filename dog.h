#pragma once
#include "feline.h"

class dog : public feline {
public:
  dog() = default;
  dog(const std::string &fur_s, const std::string &description)
      : feline{fur_s, description} {}

  virtual void bark() const {
    std::cout << "dog with fur " << fur_style << description << " barks\n";
  }
  virtual void breathe() const override {
    std::cout << "dog with fur " << fur_style << " breathes\n";
  }

  virtual void run(int a = 1) const override {
    std::cout << "Dog with fur " << fur_style << " runs\n";
  }
};