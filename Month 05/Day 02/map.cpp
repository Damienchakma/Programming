#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // map<int, int> m;
    // m[0] = 20;
    // m[1] = 21;
    // m[2] = 22;

    map<string, int> population;
    population["BD"] = 120;
    population["FR"] = 140;
    population["US"] = 150;
    population["JP"] = 1110;
    population["ABC"] = 180;
    population["CBA"] = 140;

    string country; cin >> country;
    cout << population[country] << "\n";

    /**
     * map -> O(logN)
     * unordered_map -> O(1), worst case -> O(N)
    */
}