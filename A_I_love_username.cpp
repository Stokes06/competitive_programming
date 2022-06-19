#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)


int main()
{
    fast_io;

    int n;
    cin >> n;
    int answer = 0;
    int score;
    cin >> score;
    int minScore = score;
    int maxScore = score;
    for(int i =1; i < n; i++){

        cin >> score;
        if(score > maxScore){
            maxScore = score;
            answer++;
        } else if(score < minScore){
            minScore = score;
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}