#include <iostream>
#include <vector>
#include <algorithm>

// Define a Student structure
struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Comparator function to compare students by CGPA in descending order
bool compareByCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa;
}

// Function to sort students by CGPA in descending order
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Create a list of student objects
    std::vector<Student> students = {
        {"Alice", "A001", 3.8},
        {"Bob", "B002", 3.6},
        {"Charlie", "C003", 3.9},
        {"David", "D004", 3.7},
    };

    // Sort the list of students by CGPA in descending order
    sort_students(students);

    // Print the sorted list of students
    std::cout << "Students sorted by CGPA in descending order:" << std::endl;
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}

