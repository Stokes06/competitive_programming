#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;
    int n;
    cin >> n;



    unordered_map<string, int> polygons;

    polygons["Tetrahedron"] = 4;
    polygons["Cube"] = 6;
    polygons["Octahedron"] = 8;
    polygons["Dodecahedron"] = 12;
    polygons["Icosahedron"] = 20;

    int totalFaces = 0;
    while(n--){
        string s;
        cin >> s;
        totalFaces += polygons[s];
    }

    cout << totalFaces << endl;

    return 0;
}