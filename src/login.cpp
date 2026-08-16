#include <iostream>
#include <string>

const int MAX_ATTEMPTS = 3;

bool validateCredentials(const std::string& username, const std::string& password) {
    return !username.empty() && !password.empty();
}

void attemptLogin(const std::string& username, const std::string& password, int attemptCount) {
    if (attemptCount >= MAX_ATTEMPTS) {
        std::cout << "Account locked due to too many failed attempts." << std::endl;
        return;
    }
    if (validateCredentials(username, password)) {
        std::cout << "Login successful for user: " << username << std::endl;
    } else {
        std::cout << "Login failed: invalid credentials." << std::endl;
    }
}

int main() {
    std::cout << "Login Module" << std::endl;
    attemptLogin("student1", "pass123", 0);
    return 0;
}
