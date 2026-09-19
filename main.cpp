#include <iostream>
using namespace std;

bool assertValue(
    string inputNum, long double *num)
{
    try
    {
        *num = stold(inputNum);
    }
    catch (const invalid_argument)
    {
        cout << "num is incorrectб try again\n";
        return false;
    }
    catch (const out_of_range){
        cout << "num is too big!\n";
    }
    return true;
}

void readData(
    string inputNum1, string inputNum2,
    long double *num1, long double *num2, char *operand)
{
    bool correctNumInputCheck = false;
    while (!correctNumInputCheck)
    {
        cout << "input first num:\n";
        cin >> inputNum1;
        correctNumInputCheck = assertValue(inputNum1, num1);
    }
    correctNumInputCheck = false;
    while (!correctNumInputCheck)
    {
        cout << "input second num:\n";
        cin >> inputNum2;
        correctNumInputCheck = assertValue(inputNum2, num2);
    }
    cout << "input operand:\n";
    cin >> *operand;
}

void result(
    long double *num1, long double *num2, char *operand)
{
    if (*operand == '+')
    {
        cout << "result: " << *num1 + *num2;
    }
    else if (*operand == '-')
    {
        cout << "result: " << *num1 - *num2;
    }
    else if (*operand == '*')
    {
        cout << "result: " << *num1 * *num2;
    }
    else if (*operand == '/')
    {
        if (*num2 != 0)
        {

            cout << "result: " << *num1 / *num2;
        }
        else
        {
            cout << "cant divide by zero";
        }
    }
    else
    {
        cout << "Incorrect operand";
    }
    cout << "\n";
}

int main()
{
    string inputNum1 = "";
    string inputNum2 = "";
    long double number1 = 0.0;
    long double number2 = 0.0;
    char operand;

    readData(inputNum1, inputNum2, &number1, &number2, &operand);
    result(&number1, &number2, &operand);
}