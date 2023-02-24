#include <iostream>
using namespace std;
void amplify(int number);
main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    amplify(number);
}
void amplify(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            i = i * 10;
        }
        cout << i << endl;
        if (i % 4 == 0)
        {
            i = i / 10;
        }
    }
}