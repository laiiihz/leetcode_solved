#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int >> result;
        sort(nums.begin(),nums.end());
        if(nums.empty())return {};
        if(nums.empty()&&nums.back()<0)return {};
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)break;
            if(i>0&&nums[i]==nums[i-1])continue;
            int right_location=-nums[i];
            int next_i=i+1;
            int right_num=nums.size()-1;
            while (next_i<right_num){
                if(right_location==(nums[next_i]+nums[right_num])){
                    result.push_back({nums[i],nums[next_i],nums[right_num]});
                    while(next_i<right_num&&nums[right_num]==nums[right_num-1])right_num--;//右端去重
                    while (next_i<right_num&&nums[next_i]==nums[next_i+1])next_i++; //左段去重
                    right_num--;
                    next_i++;
                }else if(nums[next_i]+nums[right_num]<right_location)next_i++;
                else right_num--;
            }
        }
        return result;
    }
};

int main() {
    vector<int> a(5);
    a.push_back(5);

    Solution solution;
    vector<vector<int>> result=solution.threeSum(a);
    cout<<a[0][0]<<endl;
    return 0;
}