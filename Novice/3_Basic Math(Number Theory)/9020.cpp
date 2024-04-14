#include<iostream>
#include <vector>

using namespace std;

vector<bool> is_prime; //소수: true

void isPrime(int n) {
    is_prime.assign(2 * n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= 2 * n; i++) {
        if (!is_prime[i])
            continue;
        for (int j = i * i; j <= 2 * n; j += i) {
            if (!is_prime[j])
                continue;
            is_prime[j] = false;
        }
    }
}

int main() {
    int T;

    while (T--) {
        int n;
        cin >> n;
        isPrime(n);
        for (int i = n / 2; i >= 2; i--) {
            if (is_prime(i) && is_prime(n - i))
                
        }
    }

    return 0;
}