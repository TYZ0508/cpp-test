#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name; // 学生姓名
    int marks[5]; // 5门科目的成绩
    float average; // 平均分
    char grade; // 等级
};

float average(int marks[]) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    return total / 5;
}

char grades(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    Student S1;

    cout << "Enter student's name: ";
    getline(cin, S1.name);

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for 5 subjects: ";
        cin >> S1.marks[i];
    }

    S1.average = average(S1.marks);
    S1.grade = grades(S1.average);

    cout << "\nStudent Name: " << S1.name << endl;
    cout << "Average Mark: " << S1.average << endl;
    cout << "Grade: " << S1.grade << endl;

    return 0;
}