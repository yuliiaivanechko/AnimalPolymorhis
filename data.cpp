#include "cat.h"
#include "crow.h"
#include "dog.h"
#include "pigeon.h"
#include <iostream>

int main() {
  dog dog1{"dark grey", "dog1"};
  cat cat1{"black", "cat1"};
  pigeon pigeon1{"white", "pigeon1"};
  crow crow1{"black", "crow1"};

  animal *an[]{&dog1, &cat1, &pigeon1, &crow1};
  for (animal *element : an) {
    element->breathe();
  }

  feline *fel[]{&cat1, &dog1};
  for (feline *element : fel) {
    element->run();
  }

  bird *b[]{&pigeon1, &crow1};
  for (bird *element : b) {
    element->fly();
  }

  return 0;
}