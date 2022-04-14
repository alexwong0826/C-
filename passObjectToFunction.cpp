
// C++ program to calculate the average marks of two students
// C++ Pass Objects to Function
#include <iostream>
using namespace std;

class Student {

public:
    double marks1, marks2;

    // constructor to initialize marks
    Student(double m1,double m2) {
        marks1 = m1;
        marks2 = m2;
    }
};

// ***function that has objects as parameters
void calculateAverage(Student s1, Student s2) {

    // calculate the average of marks of s1 and s2 
    double average = (s1.marks1+s1.marks2 + s2.marks1+s2.marks2) / 2;

    cout << "Average Marks = " << average << endl;

}


int main() {
    Student student1(88.0,224), student2(56.0,46);

    // pass the objects as arguments
    calculateAverage(student1, student2);

    return 0;
}
