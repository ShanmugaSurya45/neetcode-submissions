class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> un;
        for(int i=0;i<nums.size();i++){
            int sum= target-nums[i];
            auto it=un.find(sum);
            if(it!=un.end()){
                return {it->second,i};
            }
            un[nums[i]]=i;

        }
        return {0}; 
    }
};

