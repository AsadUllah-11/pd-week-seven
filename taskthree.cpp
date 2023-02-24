#include <iostream>
using namespace std;
void upperPart(int rows);
void lowerPart(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    upperPart(rows);
    lowerPart(rows);
}
void upperPart(int rows)
{
    int rows2 = (rows / 2);
    int i = 1;
    for (; i <= rows2; i++)
    {
        for (int j = rows2; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lowerPart(int rows)
{
    int rows2 = (rows / 2);
    int i = 1;
    for (; i <= rows2; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = rows2; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
