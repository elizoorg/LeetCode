class Solution {
public:
    int myAtoi(string s) {
        long long int result=0;
        int neg=1;
        int i = 0 ;
        while(s[i]==' ') i++;
        if(s[i]=='-'){neg=-1; i++;}
        else
        if(s[i]=='+') i++;
        while(s[i]>='0' && s[i]<='9'){
            result=result*10+(s[i++]-'0');
            if(result > INT_MAX) return (neg==-1)? INT_MIN : INT_MAX;
        }
        return result*neg;
    }
};