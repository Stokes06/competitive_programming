#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

void test_case(){
    int n;
    cin >> n;

    int pos = 0;
    vector<string> answer;

    for(; n > 0; n /= 10){
        int d = n % 10;
        if(d != 0){
            stringstream ss;
            for(int i=0; i<pos; i++){
                ss << "0";
            }
            answer.push_back(to_string(d) + ss.str());
        }
        pos++;
    }

    cout << answer.size() << endl;
    for(auto& a: answer){
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    fast_io;
    int T;
    cin >> T;
    while(T--){
        test_case();
    }


    return 0;
}

