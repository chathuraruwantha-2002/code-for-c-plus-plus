#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class Student {
public:
    std::string name;
    int marks[3]; // Assuming 3 subjects for simplicity
    int totalMarks;

    // Constructor
    Student(std::string n, int m1, int m2, int m3) : name(n) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalMarks = m1 + m2 + m3;
    }
};

int main() {
    std::vector<Student> students;

    // Add student data to the vector
    students.push_back(Student("thisara", 75, 80, 70));
    students.push_back(Student("thilini", 88, 92, 85));
    students.push_back(Student("chathura", 70, 75, 68));
    students.push_back(Student("tharusha", 92, 78, 80));
    students.push_back(Student("lakmal", 82, 85, 90));
    students.push_back(Student("navod", 95, 90, 88));
    students.push_back(Student("nesdi", 78, 82, 75));
    students.push_back(Student("asith", 85, 88, 90));
    students.push_back(Student("bandara", 70, 75, 72));
    students.push_back(Student("poorni", 90, 92, 95));
    students.push_back(Student("sahas", 78, 85, 88));
    students.push_back(Student("janidu", 85, 80, 75));

    // Calculate total marks and rank students
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.totalMarks > b.totalMarks;
    });

    // Print and save ranks
    std::ofstream outputFile("ranks.txt");
    for (const auto& student : students) {
        std::cout << "Student: " << student.name << ", Total Marks: " << student.totalMarks << std::endl;
        outputFile << "Student: " << student.name << ", Total Marks: " << student.totalMarks << std::endl;
    }

    return 0;
}