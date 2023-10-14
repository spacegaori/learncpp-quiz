#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>


struct Student
{
    std::string name{};
    int grade{};
};

int getNumberOfStudents()
{
    int numberOfStudents{};
    do
    {
        std::cout << "How many students do you want to enter? ";
        std::cin >> numberOfStudents;
    } while (numberOfStudents <= 0);

    return numberOfStudents;
}

std::vector<Student> getStudents()
{
    using Students = std::vector<Student>;

    int numberOfStudents{ getNumberOfStudents() };
    
    Students students(static_cast<Students::size_type>(numberOfStudents));

    for (int studentNumber{ 1 }; auto& student : students)
    {
        std::cout << "Enter name #" << studentNumber << ": ";
        std::cin >> student.name;
        std::cout << "Enter grade #" << studentNumber << ": ";
        std::cin >> student.grade;

        ++studentNumber;
    }

    return students;
}

bool compareStudents(const Student& a, const Student& b)
{
    return (a.grade > b.grade);
}

int main()
{
    auto students{ getStudents() };

    std::sort(students.begin(), students.end(), compareStudents);

    for (const auto& student : students)
        std::cout << student.name << " got a grade of " << student.grade << '\n';

    return 0;    
}