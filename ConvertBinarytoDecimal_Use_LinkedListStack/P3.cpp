//1. Student: Hanh Nguyen, CSC1061, Section 2H1
//2. Program takes a binary number from the user and converts it to an integer
#include <iostream>
#include <cmath>
#include "linkedStack.h"

using namespace std;

int main()
{
    //Create a stack
    linkedStackType<int> stack;
    //Declare variable for a decimal
    int decimalNum;
    //Declare & initialize a variable for bit weight
    int bitWeight = 0;
    //Declare a variable for Binary number
    int binaryNum;
    //Declare a variable for a bit 0 or 1
    int bit;

    //Prompt user for binary number
    cout << "Enter a binary number: ";
    //Get a number to process
    cin >> binaryNum;
    cout << endl;

    //Setup a loop to process number into stack for conversion
    while (binaryNum > 0) {
        //Push Mod of number on stack stack.push(binaryNum % 10)
        stack.push(binaryNum % 10);
        //Increment the weight
        bitWeight++;
        //Reduce the Binary number by 10 ...binaryNum = binaryNum / 10
        binaryNum = binaryNum / 10;
    }

    //Convert the number using a stack
    // Initialize variable for decimal
    decimalNum = 0;
    //While Stack is not empty (!stack.isEmptyStack())
    while (!stack.isEmptyStack()) {
        //Decrease bit weight by one
        bitWeight--;
        //Get top of stack bit = stack.top()
        bit = stack.top();
        //POP the stack …..stack.pop()
        stack.pop();
        // Calculate decimal number
        decimalNum = decimalNum + bit * static_cast<int>(pow(2.0, bitWeight));
    }

    //Output message and number
    cout << "The equivalent decimal num is: " << decimalNum << endl;
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
