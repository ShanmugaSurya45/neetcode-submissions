class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        for(char ch:t){
            need[ch]++;
        }
        unordered_map<char,int> window;
        int left=0;
        int have=0;
        int required=need.size();
        int minlength=INT_MAX;
        int start=0;
        
        for(int right=0;right<s.size();right++){
            char ch=s[right];
            window[ch]++;
            if(need.count(ch)&&window[ch]==need[ch]){
                have++;
            }
            while(have==required){
                if(right-left+1<minlength){
                    minlength=right-left+1;
                    start=left;
                }
                char leftchar=s[left];
                window[leftchar]--;
                if(need.count(leftchar)&&window[leftchar]<need[leftchar]){
                    have--;
                }
                left++;
            }
        }
        if(minlength==INT_MAX){
            return "";
        }
        return s.substr(start, minlength);
    }
};
