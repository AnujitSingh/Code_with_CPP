class Solution {
public:
    string longestPalindrome(string s) {
        int l,h,size;
        if(s.length()==1)
            return s;
        if(s.length()==2){
            if(s[0]==s[1])
                return s;
            return s.substr(0,1);
        }
        int cnt=0,start=-1;
        int m=0;
        for(int i=1;i<(s.length()-1);i++){
            l=i;h=i+1;
            cnt=0;
            while(l>=0 && h<s.length() && s[l]==s[h]){
                cnt+=2;
                l--;
                h++;
            }
            if(cnt>m){
                m=cnt;
                start=l+1;
            }
            l=i-1;
            h=i;
            cnt=0;
            while(l>=0 && h<s.length() && s[l]==s[h]){
                cnt+=2;
                l--;
                h++;
            }
            if(cnt>m){
                m=cnt;
                start=l+1;
            }
            l=i-1;
            h=i+1;
            cnt=1;
            while(l>=0 && h<s.length() && s[l]==s[h]){
                cnt+=2;
                l--;
                h++;
            }
            if(cnt>m){
                m=cnt;
                start=l+1;
            }
            
        }
        if(start==-1)
            return s.substr(0,1);
        return s.substr(start,m);
    }
};
