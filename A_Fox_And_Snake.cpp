#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

void drawLine(int col)
{
    for (int i = 0; i < col; i++)
    {
        cout << "#";
    }
}

void drawTurn(int col, int dir)
{
    if (dir == 1)
    {
        cout << "#";

        for (int i = 1; i < col; i++)
        {
            cout << ".";
        }
    }
    else
    {
        for (int i = 0; i < col - 1; i++)
        {
            cout << ".";
        }

        cout << "#";
    }
}

int main()
{
    fast_io;

    int row, col;
    cin >> row >> col;

    bool snake = true;
    int dir = 1;
    for (int r = 0; r < row; ++r)
    {
        if (snake)
        {
            drawLine(col);
            dir *= -1;
        }
        else
        {
            drawTurn(col, dir);
        }
        cout << endl;
        snake ^= true;
    }
    return 0;
}