#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Amount of numbers: ";
    cin >> n;
    float c2 = 0, c3 = 0, cfour = 0;

    for (int i = 1; i <= n; i++)
    {
        int number;
        cout << "Enter Number: ";
        cin >> number;
        if (number % 2 == 0)
        {
            c2++;
        }
        if (number % 3 == 0)
        {
            c3++;
        }
        if (number % 4 == 0)
        {
            cfour++;
        }
    }
    float percentc2, percentc3, percentcfour;
    percentc2 = (c2 / n) * 100;
    percentc3 = (c3 / n) * 100;
    percentcfour = (cfour / n) * 100;
    cout << percentc2 << "%" << endl;
    cout << percentc3 << "%" << endl;
    cout << percentcfour << "%";
}