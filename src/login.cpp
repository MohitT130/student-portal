#include <iostream>
#include <string>

bool validateCredentials(const std::string& username, const std::string& password) {
   return !username.empty() && !password.empty();
}

int main() {
   std::cout << "Login Module" << std::endl;
   return 0;
}
