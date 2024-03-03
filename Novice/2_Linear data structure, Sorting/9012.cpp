#include<iostream>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        string s;
        int left = 0, no = 0;
        cin >> s;
        for (char c: s) {
            if (c == '(')
                left++;
            else if (left == 0) //열린 괄호가 없음
                no = 1;
            else
                left--;
        }
        if (left > 0) no = 1;   //닫힌 괄호가 남아 있음
        cout << (no ? "NO" : "YES") << '\n';
    }

    return 0;
}