#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string name;
    double grade;
};

void displayDashboard(const std::vector<Course>& courses) {
    std::cout << "=== Academic Dashboard ===" << std::endl;
}

int main() {
    std::vector<Course> courses;
    courses.push_back({"Data Structures", 8.5});
    displayDashboard(courses);
    return 0;
}
