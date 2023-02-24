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
    int i = 1;
    while (i <= number)
    {
        if (i % 4 == 0)
        {
            i = i * 10;
        }
        cout << i << endl;
        i = i / 10;
    }
}