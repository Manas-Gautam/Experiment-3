//Name: - Manas Gautam
//PRN: - 23070123081
//Branch: - E&Tc{B1}

//EXP: - 3.1
#include <iostream> // 1: Include the iostream library for input and output.

using namespace std; // 2: Use standard namespace to simplify code.

int main() { // 3: Entry point of the program.

    int a, b; // 4: Declare integer variables `a` and `b`.
    int sum, subtraction, multiplication, division; // 5: Declare variables for results.

    // 6: Prompt user for input and read two integers.
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // 7: Perform arithmetic operations.
    sum = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = b != 0 ? a / b : 0; // 8: Avoid division by zero.

    // 9: Output the results.
    cout << "Sum = " << sum << endl;
    cout << "Subtraction = " << subtraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " << division << endl;

    return 0; // 10: Return 0 to indicate successful completion.
}

//Exp:- 3.2

#include <iostream> // 1: Include iostream for input and output.

using namespace std; // 2: Use standard namespace.

int main() { // 3: Main function.

    int a, b; // 4: Declare variables for input.

    // 5: Prompt user for input and read values.
    cout << "Enter values for a and b: ";
    cin >> a >> b;

    // 6: Compare `a` and `b` and display results.
    if (a == b)
        cout << "a == b" << endl; // Equal
    else if (a != b)
        cout << "a != b" << endl; // Not equal

    if (a > b)
        cout << "a > b" << endl; // Greater than
    else if (a < b)
        cout << "a < b" << endl; // Less than

    return 0; // 7: Return 0 to indicate successful completion.
}


//Exp: - 3.3

#include <iostream> // 1: Include iostream for input and output operations.

using namespace std; // 2: Use the standard namespace.

int main() { // 3: Main function.

    int a, b; // 4: Declare variables for input.

    // 5: Prompt user for input and read values.
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // 6: Apply logical operators and display results.
    cout << "\n" << (a > 1 && b < 10) << endl;  // Logical AND
    cout << "\n" << (a > 1 || b < 10) << endl;  // Logical OR
    cout << "\n" << !(a > 1 && b < 10) << endl; // Logical NOT

    return 0; // 7: Return 0 to indicate successful completion.
}



