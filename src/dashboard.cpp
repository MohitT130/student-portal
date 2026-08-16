#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string name;
    double grade;
};

double calculateGPA(const std::vector<Course>& courses) {
    if (courses.empty()) return 0.0;
    double total = 0.0;
    for (size_t i = 0; i < courses.size(); i++) {
        total += courses[i].grade;
    }
    return total / courses.size();
}

std::string getTopCourse(const std::vector<Course>& courses) {
    if (courses.empty()) return "N/A";
    std::string top = courses[0].name;
    double highest = courses[0].grade;
    for (size_t i = 1; i < courses.size(); i++) {
        if (courses[i].grade > highest) {
            highest = courses[i].grade;
            top = courses[i].name;
        }
    }
    return top;
}

void displayDashboard(const std::vector<Course>& courses) {
    std::cout << "=== Academic Dashboard ===" << std::endl;
    for (size_t i = 0; i < courses.size(); i++) {
        std::cout << courses[i].name << ": " << courses[i].grade << std::endl;
    }
    std::cout << "GPA: " << calculateGPA(courses) << std::endl;
    std::cout << "Top Course: " << getTopCourse(courses) << std::endl;
}

int main() {
    std::vector<Course> courses;
    courses.push_back({"Data Structures", 8.5});
    courses.push_back({"Operating Systems", 9.0});
    displayDashboard(courses);
    return 0;
}
