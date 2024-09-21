#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int countBoxes(const string &s)
{
    int numVowels = 0, numConsonants = 0, numDigits = 0;

    // Count vowels, consonants, and digits
    for (char ch : s)
    {
        if (isdigit(ch))
        {
            numDigits++;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            numVowels++;
        }
        else
        {
            numConsonants++;
        }
    }

    // Calculate the number of boxes needed
    int consonantBoxes = (numConsonants + 2) / 3; // Each box can store up to 3 consonants
    int vowelBoxes = (numVowels + 1) / 2;         // Each box can store up to 2 vowels
    int digitBoxes = numDigits;                   // Each box can store only 1 digit


    return consonantBoxes + vowelBoxes + digitBoxes;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        cout << countBoxes(s) << endl;
    }

    return 0;
}
