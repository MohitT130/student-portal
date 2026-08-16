#include <iostream>
#include <string>

struct StudentProfile {
    std::string name;
    std::string rollNumber;
    std::string department;
};

void displayProfile(const StudentProfile& profile) {
    std::cout << "Name: " << profile.name << std::endl;
    std::cout << "Roll Number: " << profile.rollNumber << std::endl;
    std::cout << "Department: " << profile.department << std::endl;
}

void updateDepartment(StudentProfile& profile, const std::string& newDept) {
    profile.department = newDept;
    std::cout << "Department updated to: " << newDept << std::endl;
}

int main() {
    StudentProfile profile;
    profile.name = "Mohit Tripathi";
    profile.rollNumber = "2026204020";
    profile.department = "Product Design and Management";
    displayProfile(profile);
    updateDepartment(profile, "Computer Science");
    return 0;
}
