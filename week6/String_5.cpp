class Solution {
public:
    void firstUniqChar(string s) {
         vector<int> un(26, 0);
        for(int i = 0; i < s.length(); i++){
            un[s[i] - 'a']++;
        }
        
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            if(un[s[i] - 'a'] > 1){
                cout<<i;
            }
        }
    }
};
