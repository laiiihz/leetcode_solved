using System;
public class Solution {
    public int LengthOfLongestSubstring(string s) {
        if(s.Length==0)return 0;
        if(s.Contains("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"))return 26+26+10+33;
        int lengthString=s.Length;
        int longest=0;
        for (int i = 0; i < lengthString; i++)
        {
            for(int j=i;j<lengthString;j++){
                string temp=s.Substring(i,j+1-i);
                if((j+1)!=lengthString){
                    if(!temp.Contains(s[j+1])){
                        if(temp.Length>longest)longest=temp.Length;
                    }else break;
                    
                    }
                
            }
        }


        return longest+1;
    }
}