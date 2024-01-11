#ifndef USER_H
#define USER_H

#include <iostream>
#include <memory>

template <typename T>
class User {
public:
  User(const T& id, const std::string& name);

  virtual ~User() = default;

  T getId() const;

  std::string getName() const;

  void printUserInfo() const;

protected:
  T id;
  std::string name;
};

#endif  // USER_H
