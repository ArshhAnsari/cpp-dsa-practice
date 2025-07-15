// selection sturcture (if else / switch case)
#include<iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // If-else-if-else ladder for party eligibility
    if (age < 0) {
        cout << "Invalid age! Please enter a valid age." << endl;
    } else if (age < 18) {
        cout << "Sorry, you cannot come to the party. You're too young!" << endl;
    } else if (age == 18) {
        cout << "Congratulations! You just turned 18. You're lucky, and you can come to the party!" << endl;
    } else {
        cout << "You're eligible to come to the party. Enjoy the celebration!" << endl;
    }

    // Switch-case for personalized messages based on age
    switch (age) {
        case 18:
            cout << "You're 18! Welcome to the world of adulthood. Enjoy the party!" << endl;
            break;
        case 22:
            cout << "You're 22! It's a fantastic age to celebrate. Have a great time at the party!" << endl;
            break;
        default:
            cout << "Feel free to join the party. Remember, age is just a number!" << endl;
            break;
    }

    return 0;
}

    // Workflow comments:
    // In the if-else ladder, it checks each condition sequentially until it finds the first true condition.
    // Once a true condition is found, the corresponding block of code is executed, and the rest of the ladder is skipped.

    // In the switch-case structure, it evaluates the expression (age) once and jumps directly to the matching case (or default).
    // After executing the code in the matching case, it continues until it encounters a break statement or reaches the end of the switch.
    // If there is no break, it "falls through" to subsequent cases until a break is encountered.
    // The switch-case is more suitable when checking multiple values of a single variable.