#include "Serializer.hpp"

int main() {
  Data d("Ayoub");
  Serializer ser;
  uintptr_t before = ser.serialize(&d);
  Data *after = ser.deserialize(before);

  std::cout << d.GetName() << std::endl;
  std::cout << after->GetName() << std::endl;
}
