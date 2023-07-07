#include<bits/stdc++.h>
using namespace std;

// Country -> population

/**
 * BD -> 160
 * FR -> 123
 * US -> 300
 * JP -> 180
*/

int hash_func(string country) {
    int sum = 0;
    for (char ch : country) {
        sum += (int) ch;
    }
    return sum % 100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << hash_func("BD") << "\n";
    cout << hash_func("US") << "\n";
    cout << hash_func("FR") << "\n";
    cout << hash_func("JP") << "\n";
    cout << hash_func("ABC") << "\n";
    cout << hash_func("CBA") << "\n";

    int population[100];

    population[hash_func("BD")] = 160;
    population[hash_func("FR")] = 123;
    population[hash_func("US")] = 300;
    population[hash_func("JP")] = 180;
    population[hash_func("ABC")] = 180; // population[98] = 180
    population[hash_func("CBA") + 1] = 140; // population[98] = 140

    string country; cin >> country;
    cout << population[hash_func(country)] << "\n";
}

// Collision

/**
 * To prevent collision:
 * 
 * 1. Open Addressing
 * 2. Separate chaining
*/