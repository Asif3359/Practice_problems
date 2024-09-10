#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * (w * (w + 1)) / 2;

    int borrow = total_cost - n;
    // cout << (3*1 + 3*2 + 3*3 + 3*4)-17 << "\n";

    if (borrow > 0) {
        cout << borrow << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
