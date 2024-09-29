#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time, speed;
    cin >> time >> speed;

    double distance = time * speed;
    double fuel_needed = distance / 12.0;

    cout << fixed << setprecision(3) << fuel_needed << endl;

    return 0;
}
