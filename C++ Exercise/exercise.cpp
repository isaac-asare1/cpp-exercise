#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <sstream>

using namespace std;


// ===============================================================
// QUESTION 1:
// Write a C++ program that takes in two integer values from the user and calculates
// the sum, difference, product, and quotient using the appropriate operators.
// ===============================================================
int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "\nSum: " << (a + b) << endl;
    cout << "Difference (a - b): " << (a - b) << endl;
    cout << "Product: " << (a * b) << endl;

    if (b == 0) {
        cout << "Quotient: undefined (cannot divide by zero)" << endl;
    } else {
        cout << "Quotient (a / b): " << (a / b) << endl;
    }

    return 0;
}


/*
===============================================================
QUESTION 2:
Write a C++ program that calculates the area of a circle given the radius as input
from the user. Use the formula pi*r^2 and use the exponentiation operator to
calculate the squared radius.
===============================================================
// int main() {
//     double r;
    
//     cout << "Please enter the radius of your circle: ";
//     cin >> r;
    
//     double pi = 3.1427;
    
//     double area = pi * pow(r,2);
    
//     cout << "This is the area of your circle: " << area;
    
//     return 0;
// }*/

/*
===============================================================
QUESTION 3:
Write a C++ program that takes in three integer values from the user and checks
if they are equal using the equality operator. If they are equal, print "Equal"
to the screen, otherwise print "Not equal".
===============================================================
int main(){
    int a,b,c;
    
    cout << "Please enter the first integer: ";
    cin >> a;
    cout << "Please enter the second integer: ";
    cin >> b;
    cout << "Please enter the third integer: ";
    cin >> c;
    
    if(a==b && a==c){
        cout<<"Equal";
        
    }
    else{
        cout<<"Not equal";}
    
    return 0;
}
/*

// ===============================================================
// QUESTION 4:
// Write a C++ program that reads in a string from the user and checks if it is equal
// to the string "hello" using the equality operator. If it is equal, print "Hello!"
// to the screen, otherwise print "Goodbye!".
// ===============================================================
// int main() {
//     string str;

//     cout << "Please Enter a string: " ;
//     cin >> str;
    
//     if(str == "hello") {
        
//         cout << "Hello!" ;
//     } else {
//         cout <<  "Goodbye!";
//     }
//  return 0;
// }


/*
===============================================================
QUESTION 5:
Write a C++ program that reads in two integer values from the user and checks if
the first value is greater than the second using the greater than operator. If it is,
print "First value is greater" to the screen, otherwise print "Second value is greater".
===============================================================
int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    if (a > b) {
        cout << "\nFirst value is greater" << endl;
    } else {
        cout << "\nSecond value is greater" << endl;
    }

    return 0;
}
*/

// ===============================================================
// QUESTION 6:
// Write a C++ program that reads in a character from the user and checks if it is an
// uppercase letter using the logical AND operator and the isupper() function. If it is,
// print "Uppercase letter" to the screen, otherwise print "Not an uppercase letter".
// ===============================================================

/* int main() {
     char c;

     cout << "Please enter a charater: ";
     cin >> c;

     bool isUpperCase = isupper(c);

     if (isUpperCase) {
        cout <<  "Uppercase letter" <<endl;
    } else{
         cout <<  "Not an uppercase letter" ;

     }

    return 0;
} */





// ===============================================================
// // QUESTION 7:
// // Write a C++ program that reads in a string from the user and checks if it contains
// // the character 'a'. If it does, print "Contains 'a'" to the screen, otherwise print
// // "Does not contain 'a'".
// // ===============================================================

/* int main() {
    string str;
    
    cout <<  "Please enter your string: ";
    cin >> str;
    
    int findA = str.find("a");
    
    if(findA == -1) {
        cout << "Does not contain 'a' ";
        
        
    } else {
        cout << "Contains 'a' ";
    }
    
    return 0;
} */




// ===============================================================
// QUESTION 8:
// Write a C++ program that reads in an integer value from the user and checks if it
// is odd using the modulus operator. If it is odd, print "Odd number" to the screen,
// otherwise print "Even number".
// ===============================================================



/* int main() {
    int i;
    
    cout << "Please enter an integer: " ;
    cin >> i;
    
    if(i %2 != 0 ) {
        cout << "Odd number";
        
    } else {
        cout << "Even number";
    }
    
    
     return 0;
} */


// ===============================================================
// QUESTION 9:
// Explain the difference between the assignment operator and the equality operator
// in C++. Give an example of each.
// ===============================================================
/*int main() {
    cout << "\nDifference between '=' and '==':\n";
    cout << "1) '=' assigns a value to a variable.\n";
    cout << "   Example: int x = 5;\n\n";
    cout << "2) '==' compares two values and returns true/false.\n";
    cout << "   Example: if (x == 5) { ... }\n";
    return 0;
}
*/




// ===============================================================
// QUESTION 10:
// Write a C++ program that uses the ternary operator to determine the larger of two
// integers.
// ===============================================================

/* int main() {
     int a,b;
     cout << "Please enter the first integer: ";
     cin >> a;
     cout << "Please enter the second integer: ";
     cin >> b;
     
     (a > b) ? cout << "Integer '1' is greater than integer '2'"  : cout << "Integer '2' is larger than integer '1'";
     
     return 0;
} */





/*
===============================================================
QUESTION 11:
Explain the difference between the increment and decrement operators in C++.
Give an example of each.
===============================================================
int main() {
    cout << "\nIncrement (++) adds 1.\n";
    cout << "Example: int x = 5; x++;  // x becomes 6\n\n";
    cout << "Decrement (--) subtracts 1.\n";
    cout << "Example: int y = 5; y--;  // y becomes 4\n";
    return 0;
}
*/


// ===============================================================
// QUESTION 12:
// Write a C++ program that uses the logical AND operator to check if a number is both
// odd and divisible by 3.
// ===============================================================
/*int main() {
    int number;
    
    cout << "Please enter a number: ";
    cin >> number;
    
    if((number %2 != 0) && (number %3 == 0)) {
        cout << "The number is both odd and divisible by 3.";
    } else {
         cout << "The number did not meet the criteria"; 
    }
    
    return 0;
}
*/

/*
===============================================================
QUESTION 13:
Write a C++ program that uses the bitwise XOR operator to swap the values of two variables.
===============================================================
int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "After swap:  a = " << a << ", b = " << b << endl;
    return 0;
}
*/

/*
===============================================================
QUESTION 14:
Explain the difference between the left shift and right shift operators in C++.
Give an example of each.
===============================================================
int main() {
    cout << "\nLeft shift (x << k) shifts bits left.\n";
    cout << "Example: 5 << 1 = 10\n\n";
    cout << "Right shift (x >> k) shifts bits right.\n";
    cout << "Example: 10 >> 1 = 5\n";
    return 0;
}
*/

/*
===============================================================
QUESTION 15:
Write a C++ program that uses the conditional operator to determine the larger of two
floating point numbers.
===============================================================
int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    double larger = (a > b) ? a : b;

    cout << "\nLarger number: " << larger << endl;
    return 0;
}
*/

/*
===============================================================
QUESTION 16:
Explain the difference between the bitwise NOT and logical NOT operators in C++.
Give an example of each.
===============================================================
int main() {
    cout << "\nBitwise NOT (~) flips all bits of an integer.\n";
    cout << "Example: int x = 5; int y = ~x;\n\n";
    cout << "Logical NOT (!) flips true/false.\n";
    cout << "Example: bool ok = true; bool notOk = !ok;\n";
    return 0;
}
*/

/*
===============================================================
QUESTION 17:
Write a C++ program that uses the bitwise AND operator to check if a number is a power of 2.
===============================================================
int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0 && ((n & (n - 1)) == 0)) {
        cout << "\nPower of 2" << endl;
    } else {
        cout << "\nNot a power of 2" << endl;
    }

    return 0;
}
*/

/*
===============================================================
QUESTION 18:
Write a C++ program to convert binary to decimal.
===============================================================
int main() {
    string bin;

    cout << "Enter a binary number: ";
    cin >> bin;

    bool valid = true;
    if (bin.empty()) valid = false;

    for (char c : bin) {
        if (c != '0' && c != '1') {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "\nInvalid binary input." << endl;
        return 0;
    }

    unsigned long long dec = 0;
    for (char c : bin) {
        dec = dec * 2 + (c - '0');
    }

    cout << "\nDecimal: " << dec << endl;
    return 0;
}
*/


// void binaryToDecimalHexOct(const string& bin, unsigned long long& dec, string& hexStr, string& octStr)
// {
//     dec = 0;
//     for (char c : bin) dec = dec * 2 + (c - '0');

//     stringstream hs;
//     hs << uppercase << hex << dec;
//     hexStr = hs.str();

//     stringstream os;
//     os << oct << dec;
//     octStr = os.str();
// }

// int main()
// {
//     cout << "Enter a binary number (e.g., 110101): ";
//     string bin;
//     cin >> bin;

//     bool valid = true;
//     if (bin.empty()) valid = false;
//     for (char c : bin) {
//         if (c != '0' && c != '1') { valid = false; break; }
//     }

//     if (!valid)
//     {
//         cout << "Invalid binary input. Use only 0 and 1.\n";
//         return 0;
//     }

//     unsigned long long dec;
//     string hexStr, octStr;
//     binaryToDecimalHexOct(bin, dec, hexStr, octStr);

//     cout << "\nChoose conversion:\n";
//     cout << "1) Binary to Decimal\n";
//     cout << "2) Binary to Hexadecimal\n";
//     cout << "3) Binary to Octal\n";
//     cout << "Enter option (1-3): ";

//     int choice;
//     cin >> choice;

//     if (choice == 1) cout << "Decimal: " << dec << "\n";
//     else if (choice == 2) cout << "Hexadecimal: " << hexStr << "\n";
//     else if (choice == 3) cout << "Octal: " << octStr << "\n";
//     else cout << "Invalid option.\n";

//     return 0;
// }

