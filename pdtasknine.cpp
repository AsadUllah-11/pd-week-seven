#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter Number of Rows: ";
    cin >> n;
    for (int rows = 1; rows <= n; rows++)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }
        int spaces = 2 * (n - rows);
        for (int space = 1; space <= spaces; space++)
        {
            cout << " ";
        }
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }
        cout << endl;
    }
}