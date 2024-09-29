#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string expression;

    while (getline(cin, expression))
    {
        stack<char> s;
        bool isCorrect = true;

        for (char c : expression)
        {
            if (c == '(')
            {
                s.push(c);
            }
            else if (c == ')')
            {
                if (s.empty())
                {
                    isCorrect = false;
                    break;
                }
                s.pop();
            }
        }

        if (!s.empty())
        {
            isCorrect = false;
        }

        if (isCorrect)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }

    return 0;
}
