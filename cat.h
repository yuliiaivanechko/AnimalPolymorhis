#pragma once
#include "feline.h"

class cat : public feline {
public:
  cat() = default;
  cat(const std::string &fur_s, const std::string &description)
      : feline{fur_s, description} {}

  virtual void miew() const {
    std::cout << "cat with fur " << fur_style << " miews\n";
  }
  virtual void breathe() const override {
    std::cout << "cat with fur " << fur_style << " breathes\n";
  }
  virtual void run() const override {
    std::cout << "Cat with fur " << fur_style << " runs\n";
  }
};