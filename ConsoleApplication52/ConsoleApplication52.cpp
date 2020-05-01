/*
github: struct and sort

*/
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};



void print_students(const vector<Student> &students) {
    for (const Student &
        student : students) {
        cout << "Student Name : " << student.name << "\n";
        cout << "Student Age : " << student.age << "\n";
        cout << "Student Score : " << student.score << "\n";
        cout << "------------------------------------------------------------------\n";
    }
}
int main()
{

    Student niki{ "Nikhaiil Sharavanan", 10, 100 };
    Student aziz{ "Aziz Alghamdi", 10, 200 };
    Student henry{ "Henry Hamerton", 10, 120 };
    Student ollie{ "Oliver Austin", 10, 90 };

    vector<Student> Students{niki, aziz, henry, ollie};
    sort(Students.begin(),
        Students.end(),
        [](const auto& student1, const auto& student2) {
            return student1.name > student2.name; });

    cout << "Here are the students sorted by their names in alphabetical order : \n\n";
    print_students(Students);

    sort(Students.begin(),
        Students.end(),
        [](const auto& student1, const auto& student2) {
            return student1.age < student2.age; });
    
    cout << "\n\n\n";
    cout << "Here are the students sorted by age highest to smallest : \n\n";
    print_students(Students);

    sort(Students.begin(),
        Students.end(),
        [](const auto& student1, const auto& student2) {
            return student1.score > student2.score; });
    cout << "\n\n\n";
    cout << "Here are the students sorted by score highest to lowest : \n\n";
    print_students(Students);
    cout << "\n";

}
