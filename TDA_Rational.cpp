#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simplify(int &num, int &den)
{
    int commonDivisor = gcd(abs(num), abs(den));
    num /= commonDivisor;
    den /= commonDivisor;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int N1, D1, N2, D2;
        char op, dummy;

        cin >> N1 >> dummy >> D1;

        cin >> op;

        cin >> N2 >> dummy >> D2;

        int num, den;

        switch (op)
        {
        case '+':
            num = N1 * D2 + N2 * D1;
            den = D1 * D2;
            break;
        case '-':
            num = N1 * D2 - N2 * D1;
            den = D1 * D2;
            break;
        case '*':
            num = N1 * N2;
            den = D1 * D2;
            break;
        case '/':
            num = N1 * D2;
            den = N2 * D1;
            break;
        }

        cout << num << "/" << den << " = ";
        simplify(num, den);
        cout << num << "/" << den << endl;
    }

    return 0;
}
