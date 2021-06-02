class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
      unordered_map<char,int> m;
      int n=s.length();
      for(int i=0;i<n;++i)m[s[i]]++;
      
      for(int i=0;i<n;++i) if(m[s[i]]==1)return s[i];
      return '$';
    }

};
