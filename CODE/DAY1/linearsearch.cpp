#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX / 2;

bool find_linear(int array[], int N, int key) {
    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (array[i] == key) {
            flag = true; // set flag to true when key is found
            cout << "Found" << endl;
            break;
        }
    }
    return flag;
}

void solve() {
    int N;
    cin >> N;

    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    int key;
    cin >> key;

    bool answer = find_linear(array, N, key);
    cout << answer << endl;
}

int main() {
    solve();
    return 0;
}
