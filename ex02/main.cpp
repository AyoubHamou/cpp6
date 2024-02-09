#include "Base.hpp"

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
  if (rand() % 3 == 0)
    return new A;
  else if (rand() % 3 == 1)
    return new B;
  else
    return new C;
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
}

void identify(Base &p) {
  try {
    A a = dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
  } catch (std::exception &e) {
    std::cout << "exception A" << std::endl;
  }
  try {
    B b = dynamic_cast<B &>(p);
    std::cout << "B" << std::endl;
  } catch (std::exception &e) {
    std::cout << "exception B" << std::endl;
  }
  try {
    C c = dynamic_cast<C &>(p);
    std::cout << "C" << std::endl;
  } catch (std::exception &e) {
    std::cout << "exception C" << std::endl;
  }
}

int main() {
  srand(time(0));
  Base *base1 = generate();
  Base *base2 = generate();
  Base *base3 = generate();

  identify(base1);
  identify(base2);
  identify(base3);
  try {
    identify(*base1);
  } catch (...) {
  }
}
