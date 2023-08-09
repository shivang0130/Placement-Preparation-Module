class Solution {
public:
    int myAtoi(string s) {
        
        int n = s.size();
        int res=0;
        if(n==0)
            return 0;
        
        int ind=0;
        // skipping white spaces
        while(ind < n && s[ind] == ' '){
            ++ind;
        }
        
        int sign = 1;
        if(s[ind]=='-'||s[ind]=='+'){
            sign=s[ind]=='-'?-1:1;
            ind++;
        }
        
        while(ind<n && (s[ind]>='0' && s[ind]<='9')){
            int digit=(s[ind]-'0')*sign;
            if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) 
                return INT_MAX; //check for overflow
            if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) 
                return INT_MIN; //check for underflow
            
            res=res*10+digit; // update res
            ind++;
        }
        
        return res;
    }
};