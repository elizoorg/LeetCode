class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
     int index=0;
     for(int i =0; i < words.size(); i++)
     for(size_t j=1; j<=s.size(); j++)
         if(words[i] == s.substr(0,j)) index++; 
     return index;  
    }
};