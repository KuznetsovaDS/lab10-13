#include <iostream>
#include <map>
#include <string>

using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

int main() {
    system("chcp 1251");
    map<string, char> studentGrades;

    studentGrades["Ben"] = 'A';
    studentGrades["Sofy"] = 'B';
    studentGrades["Tom"] = 'C';
    studentGrades["Ron"] = 'D';

   
    for (const auto& student : studentGrades) {
        cout << student.first << " " << student.second << endl;
    }

    studentGrades["Tom"] = 'B';

    cout << "\nОбновленные оценок " << endl;
    for (const auto& student : studentGrades) {
        cout << student.first << " " << student.second << endl;
    }

    return 0;
}