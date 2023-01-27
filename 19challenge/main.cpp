#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    double grade1;
    double grade2;
};

int main() {
    vector<Student> students = {
        {"John", 8.5, 7.3},
        {"Mike", 6.5, 8.0},
        {"Sara", 9.0, 9.5}
    };

    for (auto student : students) {
        double average = (student.grade1 + student.grade2) / 2;
        cout << student.name << "'s average: " << average << endl;
        if (average > 7.0) {
            cout << student.name << " had a good performance" << endl;
        }
    }

    return 0;
}
