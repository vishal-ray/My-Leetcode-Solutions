class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> ip;
        int ans = 0;
        int j=0,i=0;
        int size = s.size();
        while(j<size)
        {
            if(ip.count(s[j]) == 1)
            {
                while(ip.count(s[j]) == 1)
                {
                    ip.erase(s[i]);
                    i++;
                }
            }
            ip.insert(s[j]);                
            if(ip.size()>ans)
            {
                ans = ip.size();
            }
            j++;
        }
        return ans;
    }
};