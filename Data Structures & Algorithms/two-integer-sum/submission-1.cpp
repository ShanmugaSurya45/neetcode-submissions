class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> un;
        for(int i=0;i<nums.size();i++){
            int sum= target-nums[i];
            if(un.find(sum)!=un.end()){
                return {un[sum],i};
            }
            un[nums[i]]=i;

        }
        return {0}; 
    }
};

