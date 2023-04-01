#pragma once
#include "feline.h"

class cat final : public feline {
public:
  cat() = default;
  cat(const std::string &fur_s, const std::string &description)
      : feline{fur_s, description} {}

  virtual ~cat() { std::cout << "Destructor Cat" << std::endl; }

  virtual void miew() const {
    std::cout << "cat with fur " << fur_style << " miews\n";
  }
  virtual void breathe() const override {
    std::cout << "cat with fur " << fur_style << " breathes\n";
  }

  virtual void run(int a = 4) const override {
    std::cout << a << " Cat with fur " << fur_style << " runs\n";
  }
};
