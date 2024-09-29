#include <iostream>
#include <string>

using namespace std;

int main()
{
    char D;
    string N;

    while (cin >> D >> N)
    {
        if (D == '0' && N == "0")
        {
            break;
        }

        string result = "";

        for (char c : N)
        {
            if (c != D)
            {
                result += c;
            }
        }

        int startIndex = 0;
        while (startIndex < result.size() && result[startIndex] == '0')
        {
            startIndex++;
        }
        result = result.substr(startIndex);

        if (result.empty())
        {
            result = "0";
        }

        cout << result << endl;
    }

    return 0;
}
