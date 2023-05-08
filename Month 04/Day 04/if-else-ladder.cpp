#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int money;
    cout << "How much money do you have?";
    cin >> money;

    // if (money >= 40) {
    //     cout << "Ice-cream niye jete paro\n";
    // } else {
    //     cout << "Bashay giye muri khan\n";
    // }

    // If-else ladder
    if (money > 3000) {
        cout << "Pant done!\n";
    } else if (money > 1500) {
        cout << "Half-pant niyei khushi thako\n";
    } else if (money > 600) {
        cout << "Lungi niye jao\n";
    } else {
        cout << "Bashay fire jan\n";
    }
}