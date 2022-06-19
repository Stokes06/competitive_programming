#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;

    string firstGuess;
    string secondGuess;
    cin >> firstGuess >> secondGuess;

    map<char, int> realMap;
    for (char c : firstGuess)
    {
        realMap[c]++;
    }
    for (char c : secondGuess)
    {
        realMap[c]++;
    }

    string disorder;
    cin >> disorder;

    map<char, int> maybeMap;
    for(char c: disorder){
        maybeMap[c]++;
    }

    if(realMap == maybeMap){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}