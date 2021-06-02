char *encode(char *s)
{     
  string ans="";
  int c=1;
  for(int i=0;s[i]!='\0';++i)
  {
      if(s[i]==s[i+1])
      {
          ++c;
      }
      else {ans+=s[i];
          ans+=to_string(c);
          c=1;
      }
  }
  cout<<ans;
  return "";
}    
