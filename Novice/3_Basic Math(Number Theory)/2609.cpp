#include<iostream>

using namespace std;

/* 유클리드 호제법
int gcd(int a, int b) { //최대공약수
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
 */

int gcd(int a, int b) { //최대공약수
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) { //최소공배수
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << '\n';
    cout << lcm(a, b) << '\n';

    return 0;
}