#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;
    vector<int> gift(n);
    for(int i = 0; i < n; i++){
        int giftTo;
        cin >> giftTo;
        gift[giftTo - 1] = i + 1;
    }

    for(int g : gift){
        cout << g << " ";
    }
}