
#include <iostream>
#include <string>

bool validateCredentials(const std::string& username, const std::string& password) {
    return !username.empty() && !password.empty();
}

void attemptLogin(const std::string& username, const std::string& password) {
    if (validateCredentials(username, password)) {
        std::cout << "Login successful for user: " << username << std::endl;
    } else {
        std::cout << "Login failed: invalid credentials." << std::endl;
    }
}

int main() {
    std::cout << "Login Module" << std::endl;
    attemptLogin("student1", "pass123");
    return 0;
}
