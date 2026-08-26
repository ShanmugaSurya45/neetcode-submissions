class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto& p:strs){
            encoded+=to_string(p.length());
            encoded+="#";
            encoded+=p;

        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j] !='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            j++;
            string str=s.substr(j,length);
            decoded.push_back(str);
            i=length+j;
        }
        return decoded;
    }
};
