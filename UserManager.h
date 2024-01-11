#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <memory>

template <typename T>
class UserManager {
public:
  void addUser(std::unique_ptr<User<T>> user);

  std::vector<std::unique_ptr<User<T>>> getUsers() const;

  std::unique_ptr<AdminUser<T>> getAdminUser(const T& adminUserId);

  void removeUser(const T& id);

private:
  std::vector<std::unique_ptr<User<T>>> users;

  std::unique_ptr<AdminUser<T>> adminUser;
};

#endif  // USERMANAGER_H
