#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    vector<int>ans;                  
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++)    
    {
        int val = target-nums[i];
        if(m.find(val)!=m.end())
        {
            ans.push_back(m.find(val)->second);
            ans.push_back(i);
            break;
        }
        m.insert(pair<int,int>(nums[i],i));
    }
    return ans;
}

int main() {
    // cout << "Hello world!";
    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    vector<int> ans = twoSum(nums,target);
    
    cout << ans [0] << " " << ans[1];
    
    

    return 0;
}