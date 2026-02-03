#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    Student(int r, string n, float m) : roll(r), name(n), marks(m) {}

    int getRoll() { return roll; }

    void display() {
        cout << setw(6) << roll << setw(15) << name << setw(10) << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int ch, roll;
    string name;
    float marks;

    while (1) {
        cout << "\n1.Add  2.View  3.Exit\nChoice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Roll Name Marks: ";
            cin >> roll >> name >> marks;
            students.emplace_back(roll, name, marks);
        }
        else if (ch == 2) {
            cout << "\nRoll   Name        Marks\n";
            for (auto &s : students) s.display();
        }
        else break;
    }
}
