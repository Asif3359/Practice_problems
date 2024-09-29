#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string encryptLine(const string &line)
{
    int len = line.length();
    string result = line;

    for (int i = 0; i < len; ++i)
    {
        if (isalpha(result[i]))
        {
            result[i] += 3;
        }
    }

    reverse(result.begin(), result.end());

    for (int i = len / 2; i < len; ++i)
    {
        result[i] -= 1;
    }

    return result;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i)
    {
        string line;
        getline(cin, line);

        cout << encryptLine(line) << endl;
    }

    return 0;
}
