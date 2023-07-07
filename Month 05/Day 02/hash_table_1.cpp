#include<bits/stdc++.h>
using namespace std;

int hash_func(int roll_num) {
    return roll_num % 100 - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int marks[100];
    marks[hash_func(1001)] = 90;
    marks[hash_func(1002)] = 80;
    marks[hash_func(1003)] = 21;
    marks[hash_func(1004)] = 128;
    marks[hash_func(1005)] = 12;
    marks[hash_func(1006)] = 132;
    marks[hash_func(1007)] = 123;
    marks[hash_func(1008)] = 124;
    marks[hash_func(1009)] = 9545;


    int roll;
    cin >> roll;
    cout << marks[hash_func(roll)] << "\n";
}

/**
 * hash function: roll_num % 100 - 1
 * 1001 -> 1001 % 100 - 1 = 0
 * 1002 -> 1002 % 100 - 1 = 1
 * 1003 -> 1003 % 100 - 1 = 2
 * 1004 -> 1004 % 100 - 1 = 3
 * 1005 -> 1005 % 100 - 1 = 4
 * ...
 * ...
 * 1100
*/