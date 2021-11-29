/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

#include "std_lib_facilities.h"

double parseNum(string str)
{
    double num;
    bool castFail = false;
    try
    {
        num = stoi(str);
    }
    catch(const std::exception& e)
    {
        castFail = true;
    }
    if(castFail)
    {
        if(str == "zero")
        {
            num = 0;
        }
        else if(str == "one")
        {
            num = 1;
        }
        else if(str == "two")
        {
            num = 2;
        }
        else if(str == "three")
        {
            num = 3;
        }
        else if(str == "four")
        {
            num = 4;
        }
        else if(str == "five")
        {
            num = 5;
        }
        else if(str == "six")
        {
            num = 6;
        }
        else if(str == "seven")
        {
            num = 7;
        }
        else if(str == "eight")
        {
            num = 8;
        }
        else if(str == "nine")
        {
            num = 9;
        }
    }
    return num;
}

int main()
    {
        string operation;
        string numOne;
        string numTwo;
        double num1;
        double num2;
        
        cout << "Enter an operation followed by two numbers and use spaces to separate each value (single digits only)\n";
        cin >> operation;
        cin >> numOne;
        cin >> numTwo;

        num1 = parseNum(numOne);
        num2 = parseNum(numTwo);

        if(operation =="+")
        {
            cout << num1+num2 << "\n";
        }
        else if(operation =="-")
        {
            cout << num1-num2 << "\n";
        }
        else if(operation =="*")
        {
            cout << num1*num2 << "\n";
        }
        else if(operation =="/")
        {
            cout << num1/num2 << "\n";
        }
        return 0;
    }
