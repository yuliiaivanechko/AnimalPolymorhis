#pragma once
#include <iostream>
#include <string>

class animal {
public:
  animal() = default;
  animal(const std::string &desc) : description{desc} {}

  virtual void breathe() const {
    std::cout << "Animal breathing " << description << "\n";
  }

  virtual ~animal() {}

protected:
  std::string description;
};