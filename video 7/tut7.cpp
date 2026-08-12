#include <iostream>

using namespace std;

int c = 45;

int main()
{
    cout << "This is tutorial 7" << endl;

    // ***** Build in Data Types *****
    // int a,b,c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is: " << c << endl;
    // cout << "The global c is: " << ::c; /* here '::' is scope-resolution operator, if there is no scope-resolution operator then it will give local value of c which is sum of a and b */

    // ***** float, double & long-double Literals *****
    // float d = 34.4f;
    // long double e =34.4l;
    // /* 34.4 by default this value and other decimal values are double, we can specify them by writing 'f'  and 'l'*/
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    // cout<<"The value of d: "<< d <<endl<< "The value of e: "<< e;

    // ***** Reference Variables *****

    // float x = 455; /* Here 'x' is the original variable */
    // float & y = x; /* Here 'y' is the reference varialble*/
    // cout << x << endl;
    // cout << y << endl;

    // ***** Typecasting *****
    // typecasting means converting/changing datatypes

    int a = 45;
    float b = 45.3;
    cout << "The value of a : " << a << endl;        /* here a is integer data-type */
    cout << "The value of a : " << (float)a << endl; /* here a is float data-type */
    cout << "The value of a : " << float(a) << endl; /* here a is float data-type */
    cout << "The value of b : " << b << endl;        /* here b is float data-type */
    cout << "The value of b : " << (int)b << endl;   /* here b is integer data-type */
    cout << "The value of b : " << int(b) << endl;   /* here b is integer data-type */
    int c = int(b);

    cout << "The expression is " << a + b << endl; /* here ans is 90.3 bc b is float */
    cout << "The expression is " << a + int(b) << endl; /* here ans is 90 bc b is changed to integer */
    cout << "The expression is " << a + (int)b << endl; /* here ans is 90 bc b is changed to integer */
    return 0;
}
