#include <iostream>

using namespace std;

int glo = 6;

void sum() {
    int a;
    cout << glo;
}

int main() {
    int glo = 8;
    glo = 10;
    // int a = 4;
    // int b = 6;
    int a = 14, b = 16;
    float pi = 3.14;
    char c = 'b'; // use only character otherwise it will print last character & use single quotes only
    bool is_true = true; // here is true = 1, b/c true = 1 & false = 0  
    sum();
    cout << "\n" << glo << "\n" << is_true;
    cout << "\nThis is tutorial 4. \nHere the value of a is "<< a << ". \nThe value of b is "<< b;
    cout << "\nThe value of pi is " << pi;
    cout << "\nThe value of c is " << c;
    return 0;
}
