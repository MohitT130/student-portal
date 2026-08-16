#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string name;
    double grade;
};

void displayDashboard(const std::vector<Course>& courses) {
    std::cout << "=== Academic Dashboard ===" << std::endl;
    for (size_t i = 0; i < courses.size(); i++) {
        std::cout << courses[i].name << ": " << courses[i].grade << std::endl;
    }
}

int main() {
    std::vector<Course> courses;
    courses.push_back({"Data Structures", 8.5});
    courses.push_back({"Operating Systems", 9.0});
    displayDashboard(courses);
    return 0;
}
