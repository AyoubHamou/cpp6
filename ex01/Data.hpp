#pragma once

#include <string>
class Data {
private:
  std::string name;

public:
  Data();
  Data(std::string _name);
  Data(const Data &other);
  Data &operator=(const Data &other);
  ~Data();

  std::string GetName() const;
};
