class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i:nums){
            count[i]++;
        }
       // vector<vector<int>> bucket(nums.size() + 1);
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto&p:count){
            bucket[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i=nums.size();i>=1&&ans.size()<k;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k){
                    break;
                }
            }

        }
        return ans;
        
    }
};
