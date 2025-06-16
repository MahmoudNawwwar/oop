// ============================================================================
// Project: Simple Calculator using OOP in C++
// 
// This project demonstrates a calculator implemented using a class `clsCalculator`
// It supports the following operations:
// - Add, Subtract, Multiply, Divide
// - Clear result
// - Cancel last operation (undo)
// 
// Key Features:
// - Uses private variables to store internal state (_Result, _LastNumber, etc.)
// - Public methods expose functionality (Abstraction)
// - Division by zero is safely handled
// 
// Methods:
// - Add(float)
// - Subtract(float)
// - Multiply(float)
// - Divide(float)
// - Clear()
// - CancelLastOperation()
// - PrintResult()
// ============================================================================

#include <iostream>
using namespace std;

class clsCalculator {
private:
    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(float Number) {
        return (Number == 0);
    }

public:
    void Add(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Subtract(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    void Divide(float Number) {
        _LastNumber = Number;
        if (_IsZero(Number)) {
            // Avoid division by zero
            Number = 1;
        }
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Multiply(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }

    float GetFinalResults() {
        return _Result;
    }

    void Clear() {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void CancelLastOperation() {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
        _Result = _PreviousResult;
    }

    void PrintResult() {
        cout << "Result ";
        cout << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << "\n";
    }
};

int main() {
    clsCalculator Calculator1;

    Calculator1.Clear();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0); // should handle divide-by-zero
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();

    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation(); // Undo multiplication
    Calculator1.PrintResult();

    Calculator1.Clear(); // Reset everything
    Calculator1.PrintResult();

    system("pause>0");
    return 0;
}
