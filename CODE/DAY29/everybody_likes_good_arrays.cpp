#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX / 2;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int N;
        cin >> N;

        vector<int> array(N);
        for (size_t i = 0; i < N; i++) {
            cin >> array[i];
        }

        int parity = 0;

        for (int i = 0; i < N - 1; i++) {
            if ((array[i] % 2 == 0 && array[i + 1] % 2 != 0) || (array[i] % 2 != 0 && array[i + 1] % 2 == 0)) {
                parity+=0;
            }
            else{
                parity++;
            }
        }

        cout << parity << endl;
    }

    return 0;
}
