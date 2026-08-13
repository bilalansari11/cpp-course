#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This is tutorial 8" << endl;
    // Here the variables are not constant I can reassign them
    // int a = 34;
    // char c = 'c';
    // cout << "The value of a was: " << a << endl;
    // cout << "The value of c was: " << c << endl;
    // a = 45;
    // c = '4'; // here i have to use single inverted comas
    // cout << "The value of a is: " << a << endl;
    // cout << "The value of c is: " << c << endl;

    // Constants in C++, here i can not reassign them

    // const int b = 6;
    // cout << "The value of b is: " << b << endl;
    // b = 10;
    // cout << "The value of b after rassigning is: " << b << endl;

    // const float d = 12.3;
    // cout << "The value of d is: " << d << endl;
    // d = 10.32;
    // cout << "The value of d after rassigning is: " << d << endl;

    // Manipulators (endl, setw etc)
    // using setw after adding iomanip header file

    // int a = 4, b = 123, c = 1234;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a is: " << setw(4) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    // Operators Precedence
    int a = 4, b = 6;
    // int c = (a * 6) + b; // here we see precedence
    int c = ((((a * 6) - b) + b) - 12); // here we see precedence then associativity
    cout << c;
    return 0;
}