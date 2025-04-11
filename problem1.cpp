#include <bits/stdc++.h>
using namespace std;


class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    void calculate() {
        if (operation == "add" || operation == "addition" || operation == "Addition" || operation == "ADDITION" || operation == "Add" || operation == "ADD") {
            cout <<  (a + b) << endl;
        } else if (operation == "subtract" || operation == "subtraction" || operation == "Subtract" || operation == "SUBTRACT" || operation == "Subtraction" || operation == "SUBTRACTION") {
            cout <<  (a - b) << endl;
        } else if (operation == "multiply" || operation == "multiplication" || operation == "Multiply" || operation == "MULTIPLY" || operation == "Multiplication" || operation == "MULTIPLICATION") {
            cout <<  (a * b) << endl;
        } else if (operation == "divide" || operation == "division" || operation == "Divide" || operation == "DIVIDE" || operation == "Division" || operation == "DIVISION") {
            if (b != 0)
                cout <<  (a / b) << endl;
            else
                cout << "Division by zero is not allowed." << endl;
        } else {
            cout << "Invalid operation type." << endl;
        }
    }
};

int main() {
    double a, b;
    string operation;

   cin>>a>>b>>operation;

    Calculator obj(a, b, operation);
    obj.calculate();

    return 0;
}
