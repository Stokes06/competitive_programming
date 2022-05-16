#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    for (int i = 0; i < first.size(); ++i)
    {

        char c1 = tolower(first[i]);
        char c2 = tolower(second[i]);

        if(c1 < c2){
            cout << -1 << endl;
            return 0;
        } else if(c1 > c2){
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0;
}