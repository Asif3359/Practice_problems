#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int n = 8, m = 8;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int board[n][n];
    string input;
    int test_case = 1;

    while (cin >> input && input != "0")
    {
        cout << "Caso de Teste #" << test_case << ": ";
        memset(board, 0, sizeof(board));

        int x, y;

        for (int j = 0; j < n; j++)
        {
            string pawn_pos;
            cin >> pawn_pos;
            y = pawn_pos[0] - '1';
            x = pawn_pos[1] - 'a';

            if (y > 0)
            {
                if (x > 0)
                {
                    board[y - 1][x - 1] = 1;
                }
                if (x < 7)
                {
                    board[y - 1][x + 1] = 1;
                }
            }
        }

        int knightX = input[1] - 'a';
        int knightY = input[0] - '1';
        int secure_moves = 0;

        for (int i = 0; i < n; i++)
        {
            int new_x = knightX + d[i].first;
            int new_y = knightY + d[i].second;

            if (valid(new_x, new_y) && board[new_y][new_x] == 0)
            {
                secure_moves++;
            }
        }

        cout << secure_moves << " movimento(s).\n";
        test_case++;
    }

    return 0;
}
