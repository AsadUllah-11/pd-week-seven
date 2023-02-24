#include <iostream>
using namespace std;
bool isMalus(int number);
int countDigits(int number);
main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    int count;
    count = countDigits(number);
    cout << "Digits : " << count;
}
int countDigits(int number)
{
    int count = 0;
    for (int x = number; x <= number; x = x / 10)
    {
        x = x % 10;
        if (x != 0)
        {
            count++;
        }
    }
    return count;
}
bool isMalus(int number)
{
    cout << "start";
}
