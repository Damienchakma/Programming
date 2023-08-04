#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int r, int mid) {
    int left_size = mid - l + 1;
    int right_size = r - mid;

    int L[left_size + 1], R[right_size + 1];

    for (int i = 0; i < left_size; i++) {
        L[i] = a[l + i];
    }
    for (int i = 0; i < right_size; i++) {
        R[i] = a[mid + 1 + i];
    }

    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++) {
        if (L[lp] <= R[rp]) {
            a[i] = L[lp];
            lp++;
        } else {
            a[i] = R[rp];
            rp++;
        }
    }
}

void merge_sort(int a[], int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;
    merge_sort(a, l, mid); // left side
    merge_sort(a, mid + 1, r); // right side
    merge(a, l, r, mid);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[10] = {2, 4, 9, 1, 3, 7, 10, 5, 8, -1};
    merge_sort(a, 0, 9);

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
}