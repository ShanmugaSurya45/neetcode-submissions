class Solution {
public:
    int maxArea(vector<int>& heights) {
        int volume=0;
        int li=0;
        int ri=heights.size()-1;

        while(li<ri){
            int h=min(heights[li],heights[ri]);
            int w=ri-li;
            volume=max(volume,(h*w));
            if(heights[li]<heights[ri]){
                li++;
            }else{
                ri--;
            }  
        }
    return volume;
    }
};
