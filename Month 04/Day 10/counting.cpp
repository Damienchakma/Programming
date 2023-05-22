/**
 * bubble sort, insertion sort, selection sort -> time complexity O(n ^ 2)
 *                                             -> space complexity O(1)
 * 
 * counting sort -> time complexity O(MAX)
 *               -> space complexity O(MAX)
*/

// 1 - 1000

#include<bits/stdc++.h>
using namespace std;

void counting_sort (int arr[], int n) {
    int cnt[1000 + 1] = {0};

    for (int i = 0; i < n; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << " ";
        }
    }
}

int main() {
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    counting_sort(arr, n);
}