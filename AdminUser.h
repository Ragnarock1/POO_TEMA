#ifndef ADMINUSER_H
#define ADMINUSER_H

#include "User.h"

template <typename T>
class AdminUser : public User<T> {
public:
  AdminUser(const T& id, const std::string& name);

  ~AdminUser() = default;

  void addUser(std::unique_ptr<User<T>> user);

  std::vector<std::unique_ptr<User<T>>> getUsers() const;

  void removeUser(const T& id);

private:
  std::vector<std::unique_ptr<User<T>>> users;
};

#endif  // ADMINUSER_H
