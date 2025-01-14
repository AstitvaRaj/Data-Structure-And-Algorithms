#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
    return *max_element(dp.begin(), dp.end());
}


//using recursion O(2^n)
int lis(vector<int> &nums, int i, vector<int> temp){
    int ans = 0;
    for (int j = i; j < nums.size(); j++){
        if(temp.empty()){
            temp.push_back(nums[j]);
            ans = max(ans , lis(nums , j , temp) + 1);
            temp.pop_back();
        }
        if(temp[temp.size()-1]  < nums[j]){
            temp.push_back(nums[j]);
            ans = max(ans, lis(nums, j, temp) + 1);
            temp.pop_back();
        }
    }
    return ans;
}


int main(){
    int t;
    cin >> t;
    bool ans = true;
    while (t--){
        int n = 100;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            v[i] = rand() % 100;
        }
        vector<int> temp;
        ans &= (lengthOfLIS(v) == lis(v, 0, temp));
    }
    cout<<ans;
    return 0;
}
