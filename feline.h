#pragma once
#include "animal.h"

class feline : public animal {
public:
  feline() = default;
  feline(const std::string &fur_s, const std::string &description)
      : fur_style{fur_s}, animal{description} {}

  virtual void run(int a = 9) const {
    std::cout << a << " Feline with fur " << fur_style << " runs\n";
  }

  virtual void breathe() { std::cout << "Feline breathes\n"; }
  virtual ~feline() { std::cout << "Destructor Feline " << std::endl; }

protected:
  std::string fur_style{};
};