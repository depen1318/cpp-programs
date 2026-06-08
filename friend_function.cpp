#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend void showMarks(Student s);
};

void showMarks(Student s) {
    cout << "Marks = " << s.marks << endl;
}

int main() {
    Student s(95);
    showMarks(s);

    return 0;
}