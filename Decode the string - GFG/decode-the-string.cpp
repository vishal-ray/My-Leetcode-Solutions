//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++



class Solution{
public:
    
    string times(string s,int cnt){
        string ans = "";
        for(int i = 0 ; i < cnt ; i++){
            ans += s;
        }
        return ans;
    }
    
    string go(string &s,int &i){
        int num = 0;
        while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
            num = num*10+(s[i]-'0');
            i++;
        }
        //i is pointing to [
        i++;
        //find a i such that i is pointing to ]
        string ans = "";
        while(i < s.size() && s[i] != ']'){
            if(s[i] >= '0' && s[i] <= '9'){
                string t = go(s,i);
                ans += t;
            }else{
                ans += s[i];
            }
            i++;
        }
        return times(ans,num);
    }
    
    string decodedString(string s){
        // code here
        int n = s.size();
        int i = 0;
        string ans = "";
        for(int i = 0 ; i < n ; i++){
            ans += go(s,i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends