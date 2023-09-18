#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main() {  
    int n;  
    cin >> n;  
    vector<int> likes(n);  
    for (int i = 0; i < n; i++) {  
        cin >> likes[i];  
    }  
  
    vector<int> dp(n + 1, 0); // dp[i] 表示前 i 篇笔记的最大点赞数  
    vector<int> count(n + 1, 0); // count[i] 表示前 i 篇笔记的最大点赞数对应的笔记总数  
    dp[0] = 0;  
    count[0] = 0;  
    for (int i = 1; i <= n; i++) {  
        dp[i] = max(dp[i - 1], dp[i - 2] + likes[i - 1]); // 状态转移方程  
        if (dp[i] == dp[i - 1]) {  
            count[i] = count[i - 1];  
        } else if (dp[i] == dp[i - 2] + likes[i - 1]) {  
            count[i] = count[i - 2] + 1;  
        }  
    }  
  
    cout << dp[n] << " " << count[n] << endl;  
    return 0;  
}
