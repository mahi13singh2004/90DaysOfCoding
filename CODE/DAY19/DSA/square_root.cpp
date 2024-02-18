#include <iostream>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

int square_root_integer(int N) {
    int start = 0;
    int end = N;
    int answer = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid * mid > N) {
            end = mid - 1;
        } else if (mid * mid < N) {
            answer = mid;
            start = mid + 1;
        } else if (mid * mid == N) {
            answer = mid;
            break;
        }
    }
    return answer;
}

double square_root_floats(int N, int answer, int prec) {
    double fact = 1.0;
    double ans=answer;
    for (int i = 0; i < prec; i++) {
        fact = fact / 10;
        for (double j = ans; j * j < N; j = j + fact) {
            ans = j;
        }
    }
    return ans;
}

void solve() {
    int N;
    cin >> N;

    int prec;
    cin >> prec;

    int answer = square_root_integer(N);
    cout << square_root_floats(N, answer, prec);
}

int main() {
    solve();
    return 0;
}
