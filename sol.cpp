class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,n=s.size(),j,flag=0,ans;
        for(i=0;i<n;i++)
        {
            set<int> st;
            flag=0;
            for(j=i;j<n;j++)
            {
                if(st.find(s[j])!= st.end())
                {
                    flag=1;
                    ans=max(ans,j-i);
                    break;
                }
                st.insert(s[j]);
            }
            if(flag==0)
            {
                ans=max(ans,n-i);//this is very imp
            }   
        }
        return ans;
    }
};
