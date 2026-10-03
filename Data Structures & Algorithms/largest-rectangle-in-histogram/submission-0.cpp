class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int ma=0;      // maximum area
        for(int i=0;i<=n;i++){
            int currentheight = ( i== n) ? 0: heights[i];
            while(!st.empty()&& currentheight<heights[st.top()]){
                int mid=st.top();
                st.pop();
                int h=heights[mid];
                int width;
                if(st.empty()){
                    width=i;
                }else{
                    width=i-st.top()-1;
                }
                int area=h*width;
                ma=max(area,ma);
            }  
            st.push(i);

        
        }
        return ma;
    }
};