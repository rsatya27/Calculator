/**
* Name: Rajneesh Satya
* Program Name: Make a Calculator 
* Date: 9/12/24
* Extra: 
*/

#include <iostream>
#include <cmath>
using namespace std;
float num1, num2;
int main()
{
    cout << "Enter a number: \n";
    cin >> num1;
    cout << "Enter another number: \n";
    cin >> num2;
    int add1 = num1 + num2;
    int sub1 = num1 - num2;
    int mult1 = num1 * num2;
    float div1 = ceil((num1 / num2)*100)/100;
    int mod1 = (int)num1 % (int)num2;
    double square1;
    double square2;
 

    cout << num1 << " + " << num2 << " = " << add1 << endl;
    cout << num1 << " - " << num2 << " = " << sub1 << endl;
    cout << num1 << " * " << num2 << " = " << mult1 << endl;
    cout << num1 << " / " << num2 << " = " << div1 << endl;
    cout << num1 << " % " << num2 << " = " << mod1 << endl;
    int inc1 = ++num1;
    int dec1 = --num2;
    cout << "Increment of the first number: " << inc1 << endl;
    cout << "Decrement of the second number: " << dec1 << endl;
    
    cout << "Enter a third number: \n";
    cin >> square1;
    square2 = square1 * square1;
    cout << "Square of the number: " << square2 << endl;




}