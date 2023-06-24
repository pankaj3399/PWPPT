#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j= n-1;
        int k = 0;
        int i= 0;
        while(i<=j){
            if(nums[i]!=val){
                k++;
                i++;
            } else {
                swap(nums[i],nums[j--]);
            }
        }
        return k;
    }

int main() {
    // cout << "Hello world!";
    vector<int> nums = {2,7,11,15};
    int target = 7;
    
    int  ans = removeElement(nums,target);
    
    cout << ans;
    
    

    return 0;
}