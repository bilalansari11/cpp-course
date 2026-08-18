#include <iostream>

using namespace std;

int main() {
    // cout << "This is tutorial 9";

    int age;
    cout << "Tell me your age: " << endl;
    cin >> age;

    // Selection control structure: If els-if else ladder

    // if (age <= 0) {
    //     cout << "You're not born yet!" << endl;
    // }
    // else if (age < 18) {
    //     cout << "You can not come to my party!" << endl;
    // }
    // else if (age == 18) {
    //     cout << "You are a kid, you can go to a kid section." << endl;
    // }
    // else {
    //     cout << "You can enjoy the party!" << endl;
    // }


    // Selection control structure: Switch case statements

    switch (age)
    {
    case 18:
        cout << "You are 18 years old" << endl;
        break;
    case 22:
        cout << "You are 22 years old" << endl;
        break;
    case 2:
        cout << "You are 2 years old" << endl;
        break;
        
        default:
        cout << "No special case!" << endl;
        break;
    }

    cout << "Done with switch cases!" << endl;
    return 0;
}
