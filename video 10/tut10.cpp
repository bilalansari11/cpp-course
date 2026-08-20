#include <iostream>

using namespace std;

int main()
{
    cout << "This is tutorial 10" << endl;
    /* Loops in C++
     There are three types of loops in C++
     1. For loops
     2. While loops
     3. Do-While loops
     */

    // For Loops

    // write 1 to 40

    // simple and lenghty ways

    // cout << 1;
    // cout << 2;
    // cout << 3;
    // cout << 4;

    // int i = 1;
    // cout << i;
    // i++;
    // cout << i;
    // i++;
    // cout << i;
    // i++;
    // cout << i;
    // i++;
    // cout << i;
    // i++;

    // Syntax of for loops:

    // for (initialization; condition; updation/increamentation)
    // {
    //     C++ statements
    // }

    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    // While Loops
    // Syntax of while loops:

    // initialization
    // while(condition)
    // {
    //     C++ statements
    //      increamentation/updation
    // }

    // printing 1 to 40 using while loop

    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Do-While Loops
    // Syntax of Do-While loops

    // initialization
    // do {
    //     C++ statements
    //      increamentation/updation
    // } while(condition);

    // int i = 1;
    // do {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40); 

    // In above loop this loop will write 1 to 40

    int i = 1; 
    do {
        cout << i << endl;
        i++;
    } while (false);

    // In above loop this loop will write only 1, bc first it will run then check condition
    return 0;
}