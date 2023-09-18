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
  
    vector<int> dp(n + 1, 0); // dp[i] ��ʾǰ i ƪ�ʼǵ���������  
    vector<int> count(n + 1, 0); // count[i] ��ʾǰ i ƪ�ʼǵ�����������Ӧ�ıʼ�����  
    dp[0] = 0;  
    count[0] = 0;  
    for (int i = 1; i <= n; i++) {  
        dp[i] = max(dp[i - 1], dp[i - 2] + likes[i - 1]); // ״̬ת�Ʒ���  
        if (dp[i] == dp[i - 1]) {  
            count[i] = count[i - 1];  
        } else if (dp[i] == dp[i - 2] + likes[i - 1]) {  
            count[i] = count[i - 2] + 1;  
        }  
    }  
  
    cout << dp[n] << " " << count[n] << endl;  
    return 0;  
}
