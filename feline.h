#pragma once
#include "animal.h"

class feline : public animal {
public:
  feline() = default;
  feline(const std::string &fur_s, const std::string &description)
      : fur_style{fur_s}, animal{description} {}

  virtual void run() const {
    std::cout << "Feline with fur " << fur_style << " runs\n";
  }

protected:
  std::string fur_style{};
};