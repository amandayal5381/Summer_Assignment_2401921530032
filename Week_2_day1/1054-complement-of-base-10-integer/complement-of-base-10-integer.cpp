class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans =0,mult=1,rem;
        while(n)
        {
            rem=n%2;
            rem=rem^1;
            n/=2;
            ans=ans+rem*mult;
            mult*=2;
        }
        return ans;
        
    }
};