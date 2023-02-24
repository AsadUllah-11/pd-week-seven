#include <iostream>
using namespace std;
void triangle(int number);
main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    triangle(number);
}
void triangle(int number)
{
    int sum = 0;
    for (int i = number; i >= 1; i--)
    {
        sum = sum + i;
    }
    cout << "triangle: " << sum;
}