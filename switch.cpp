#include <iostream>
using namespace std;

int main() {

    char grade = 'D'; //local variable decalration
   // cout << "Enter your grade" << endl;
   // cin>>grade;

    switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
    case 'C':
        cout << "Well done" << endl;
        break;
    case 'D':
        cout << "You passed" << endl;
        break;
    case 'F':
        cout << "Better try again" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;

    return 0;
}

/*
// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}
*/