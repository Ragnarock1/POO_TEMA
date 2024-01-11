#include <iostream>
#include <string>

#include "UserManager.h"

int main() {
  // Create a user manager instance
  UserManager<int> userManager;

  // Create an admin user
  std::unique_ptr<AdminUser<int>> adminUser(new AdminUser<int>(1, "admin"));

  // Add users to the user manager
  userManager.addUser(std::make_unique<User<int>>(2, "Alice"));
  userManager.addUser(std::make_unique<User<int>>(3, "Bob"));

  // Get the admin user
  std::unique_ptr<AdminUser<int>> retrievedAdminUser = userManager.getAdminUser(1);

  // Remove a user
  userManager.removeUser(2);

  // Print user information
  for (const std::unique_ptr<User<int>>& user : userManager.getUsers()) {
    user->printUserInfo();
  }

  // Print admin user information
  retrievedAdminUser->printUserInfo();

  return 0;
}
