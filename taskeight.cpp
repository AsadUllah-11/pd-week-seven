#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int numberofCargo;
    cout << "enter number of cargo: ";
    cin >> numberofCargo;
    float minibus = 0, truck = 0, train = 0;
    float total = 0;
    for (int x = 1; x <= numberofCargo; x++)
    {
        float tons;
        cout << "Enter Weight(in tons): ";
        cin >> tons;
        total = total + tons;
        if (tons <= 3)
        {
            minibus = tons + minibus;
        }
        else if (tons > 3 && tons <= 11)
        {
            truck = truck + tons;
        }
        else if (tons > 11)
        {
            train = train + tons;
        }
    }
    float totalAveragePrice;
    totalAveragePrice = ((minibus * 200) + (truck * 175) + (train * 120)) / total;
    float percentMinibus, percentTruck, percentTrain;
    percentMinibus = ((minibus / total) * 100.0);
    percentTruck = ((truck / total) * 100.0);
    percentTrain = ((train / total) * 100.0);
    printf("Total Average Price: %.2f\n", totalAveragePrice);
    printf("Minibus: %.2f%\n", percentMinibus);
    printf("Truck: %.2f%\n", percentTruck);
    printf("Train: %.2f%\n", percentTrain);
}