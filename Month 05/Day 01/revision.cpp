#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int a; // float, double, char, bool, long long, long, long double, string
    // cin >> a;
    // cout << "Number is: " << a << "\n";

    // string str;
    // //cin >> str;
    // getline(cin, str);
    // cout << str << "\n";

    // cout << str.size() << "\n";

    // cout << str.front() << "\n";
    // cout << str.back() << "\n";
    // cout << str.at(2) << "\n";

    //int marks; cin >> marks;
    // if (a > 100) {
    //     cout << "A is greater than 100\n";
    // } else {
    //     cout << "A is less than or equal to 100\n";
    // }

    // if-else ladder
    // if (marks > 100) {
    //     cout << "Invalid";
    // } else if (marks == 100) {
    //     cout << "Full marks";
    // } else if (marks >= 80) {
    //     cout << "A+";
    // } else if (marks >= 70) {
    //     cout << "A";
    // } else if (marks >= 60) {
    //     cout << "A-";
    // } else if (marks >= 50) {
    //     cout << "B";
    // } else if (marks >= 40) {
    //     cout << "C";
    // } else if (marks >= 33) {
    //     cout << "D";
    // } else {
    //     cout << "Failed";
    // }

    //        1     2,5,8      4,7, 10
    // for (int i = 1; i <= 100; i++) {
    //     // 3, 6, 9
    //     cout << i << "\n";
    // }

    // int i = 1;
    // while (i <= 100) {
    //     cout << i << "\n";
    //     i++;
    // }

    int arr[10];
    int size = 10;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    // i = 0 -> sum = 0 + 1 = 1
    // i = 1 -> sum = 1 + 2 = 3
    // i = 2 -> sum = 3 + 3 = 6
    // i = 3 -> sum = 6 + 4 = 10
    // i = 4 -> sum = 10 + 5 = 15
    // i = 5 -> sum = 15 + 6 = 21
    // i = 6 -> sum = 21 + 7 = 28
    // i = 7 -> sum = 28 + 8 = 36
    // i = 8 -> sum = 36 + 9 = 45
    // i = 9 -> sum = 45 + 10 = 55

    cout << sum << "\n";
}