#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string number1, number2;
    string result = "";
    int carry = 0;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int i = number1.length() - 1;
    int j = number2.length() - 1;

    while(i >= 0 || j >= 0 || carry > 0)
    {
        int digit1 = 0;
        int digit2 = 0;

        if(i >= 0)
        {
            digit1 = number1[i] - '0';
            i--;
        }

        if(j >= 0)
        {
            digit2 = number2[j] - '0';
            j--;
        }

        int sum = digit1 + digit2 + carry;
        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());

    while(result.length() > 1 && result[0] == '0')
    {
        result.erase(0, 1);
    }

    cout << "Summation is: " << result;

    return 0;
}
