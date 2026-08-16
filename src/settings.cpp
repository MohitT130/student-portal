#include <iostream>
#include <string>

struct UserSettings {
    bool darkMode;
    bool notificationsEnabled;
    std::string language;
};

void displaySettings(const UserSettings& settings) {
    std::cout << "=== User Settings ===" << std::endl;
}

int main() {
    UserSettings settings;
    settings.darkMode = false;
    settings.notificationsEnabled = true;
    settings.language = "English";
    displaySettings(settings);
    return 0;
}
