bool areKAnagrams(string str1, string str2, int k) {
       // code here
       if(str1.length() != str2.length())
           return false;
           
       unordered_map<char,int> m;
       
       for(int i=0;i<str1.length();i++)
           m[str1[i]]++;
       
       int count = 0;
       
       for(int j=0;j<str2.length();j++){
           if(m[str2[j]]>0)
               m[str2[j]]--;
           else
               count++;
       }
       
       return count<=k?true:false;
   }