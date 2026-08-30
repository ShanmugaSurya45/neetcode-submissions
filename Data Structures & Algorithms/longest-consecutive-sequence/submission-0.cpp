class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> numset(nums.begin(),nums.end());
         int longest=0;
         for(int num:numset){
            //int current;
            //int length;
            if(numset.find(num-1)==numset.end()){
                 int current=num;
                 int length=1;
            
            while(numset.find(current+1)!=numset.end()){
                length++;
                current++;
            }
        
            longest=max(longest,length);
         }
        }
         return longest;
    }
};
