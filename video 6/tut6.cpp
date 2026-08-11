#include <iostream>
// #include "this.h"

// there are two types of header files:
// 1. System header files: It comes with the compiler. It uses angle brackets.
// eg: #include <iostream>
// 2. User defined header files: It is written by programmer. It uses inverdet comas.
// eg: #include "this.h" --> this will produce an error if this.h is not present in the current directory

using namespace std;

int main()
{
    cout << "This is tutorial 6" << endl;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;

    int a = 4, b = 5;

    cout << "Arithmatic Operators:" << endl;
    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a x b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;
    cout << endl;

    // Assignment Operators --> used to assign values to variables

    // int a = 6, b = 4;
    // char d = 'd';

    cout << "Comparison Operators:" << endl;
    cout << "The value of a==b is :" << (a == b) << endl; // we have to use parenthesis "()" otherwise it will throw error
    cout << "The value of a!=b is :" << (a != b) << endl;
    cout << "The value of a>=b is :" << (a >= b) << endl;
    cout << "The value of a<=b is :" << (a <= b) << endl;
    cout << "The value of a<b is :" << (a < b) << endl;
    cout << "The value of a>b is :" << (a > b) << endl;
    cout << endl;

    cout << "Logical Operators" << endl;
    cout << "The value of this logical and '&&' operator ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or '||' operator ((a==b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not '!' operator (!(a==b)) is: " << (!(a == b)) << endl;
    return 0;
}