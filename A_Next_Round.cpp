#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int minScore = max(v[k-1], 1);
    cerr << minScore << endl;
    int answer = 0;
    for(int i=0; i < n ; ++i){
        if(v[i] >= minScore) ++answer;
    }

    cout << answer << endl;
}