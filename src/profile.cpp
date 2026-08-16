#include <iostream>
#include <string>

struct StudentProfile {
    std::string name;
    std::string rollNumber;
    std::string department;
};

void displayProfile(const StudentProfile& profile) {
    std::cout << "Name: " << profile.name << std::endl;
}

int main() {
    StudentProfile profile;
    profile.name = "Mohit Tripathi";
    displayProfile(profile);
    return 0;
}
