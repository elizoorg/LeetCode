class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int start=0;
        int i=0;
        int m=spaces.size();
        int end=0;
        for(i = 0;i<m;i++){         
            end=spaces[i];
            ans+=s.substr(start,end-start);
            ans+=" ";
            start=end;         
        }
        end=spaces[i-1];
        ans+=s.substr(end,s.length()-end);
        return ans;
    }
};