#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<int, int> map;
    while((cin >> n)){
        cerr << n << endl;
        map[n]++;
    }

    stringstream ss;
    for(auto p: map){
        for(int i = 0; i < p.second; ++i){
            ss << "+" << p.first;
        }
    }

    cout << ss.str().substr(1) << endl;

}