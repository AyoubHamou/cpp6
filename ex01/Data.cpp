#include "Data.hpp"

Data::Data() {}

Data::Data(std::string _name) : name(_name) {}

Data::Data(const Data &other) { *this = other; }

Data &Data::operator=(const Data &other) {
  (void)other;
  return *this;
}

Data::~Data() {}

std::string Data::GetName() const { return this->name; }
