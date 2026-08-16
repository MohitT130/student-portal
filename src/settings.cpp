#include <iostream>
#include <string>

struct UserSettings {
    bool darkMode;
    bool notificationsEnabled;
    std::string language;
};

void displaySettings(const UserSettings& settings) {
    std::cout << "=== User Settings ===" << std::endl;
    std::cout << "Dark Mode: " << (settings.darkMode ? "On" : "Off") << std::endl;
    std::cout << "Notifications: " << (settings.notificationsEnabled ? "On" : "Off") << std::endl;
    std::cout << "Language: " << settings.language << std::endl;
}

int main() {
    UserSettings settings;
    settings.darkMode = false;
    settings.notificationsEnabled = true;
    settings.language = "English";
    displaySettings(settings);
    return 0;
}
