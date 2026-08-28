class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> output(n,1);
        int left=1;                // product of the leftside of current element
        int right=1;               // product of the rightside of current element
        for(int i=0;i<nums.size();i++){
            output[i]=left;
            left*=nums[i];         // left =left*nums[i] for next iteration
        }
        for(int i=n-1;i>=0;i--){
            output[i]*=right;     // product of both left and right product
            right*=nums[i];        // product of rightside elements for next iterations 
        }
        return output;
    
    }
};
