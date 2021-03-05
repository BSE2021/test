// BasicBlocks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

#define PI 3.14 //this is a constant definition that cannot be changed

// variable, constants, operators, expressions, hierarchy of expressions
int main()
{
    //variable are names given to values to be stored; it should be declared before use
    int age; //declaring a varibale called age
    string myName, myname = "Simon"; //declaring a variable called  myName which is different from myname
    int yourAge = 27; //initializing a variable with a value ; int is integer 
    float priceBread = 2.75; // initializing a float type of variable
    char myCurrency = '$';
    float radius, area;

    system("Color DF"); //changes background and text color- D for background and F for text

    //area of a circle
    cout << "\n*********************\n"; // \n is to break the line 
    cout << "\nGive me the radius of a circle: ";
    cin >> radius;
    area =  PI * radius * radius;
    cout << "\nThe area of a circle is " << area << " sq. cm.";
    cout << "\nEnter your age ";
    cin >> age;
    cout << " \nMy age is " << age << endl; //endl is to break the line
    cout << "\n*********************\n";

    //taking myName from user
    cout << "\n*********************\n";
    cout << "\nGive your name ";
    cin >> myName;
    cout << "\nThe value of myName is " << myName;
    cout << "\nThe value of myname is " << myname;
    cout << "\n*********************\n";

    //Displaying float value
    cout << "\n The price of bread is " << myCurrency << priceBread<<endl;
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
