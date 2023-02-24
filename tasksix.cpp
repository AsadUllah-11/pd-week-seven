#include <iostream>
using namespace std;
main()
{
    int days;
    cout << "Enter days: ";
    cin >> days;
    int doctor = 7;
    int tt = 0, tu = 0;
    int totalTreated = 0, totalUntreated = 0;
    for (int i = 1; i <= days; i++)
    {

        if ((i % 3 == 0) && (totalTreated < totalUntreated))
        {
            doctor = doctor + 1;
        }

        int p;
        cout << "Enter Patients: ";
        cin >> p;

        if (p >= doctor)
        {
            tt = doctor;
        }
        if (p < doctor)
        {
            tt = p;
        }
        tu = p - tt;
        if (tu < 0)
        {
            tu = -1 * tu;
        }

        totalTreated = tt + totalTreated;
        totalUntreated = tu + totalUntreated;
    }
    cout << "Total Treated: " << totalTreated << endl;
    cout << "Total Untreated: " << totalUntreated;
}