#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ans = 0;
    stack<int> stack;

    //입력
    cin >> N;
    vector<int> h(N + 2);   //높이
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }

    //연산
    stack.push(0);
    for (int i = 1; i <= N + 1; i++) {
        while (!stack.empty() && h[stack.top()] > h[i]) {   //다음 높이가 이전보다 커야함
            int check = stack.top();
            stack.pop();
            ans = max(ans, h[check] * (i - stack.top() - 1));
        }
        stack.push(i);
    }

    //출력
    cout << ans;

    return 0;
}