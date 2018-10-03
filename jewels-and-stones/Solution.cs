using System.Text.RegularExpressions;
using System;
public class Solution {
    public int NumJewelsInStones(string J, string S) {
        int j_size=J.Length;
        int result=0;
        for (int i = 0; i < j_size; i++)
        {
            result+=Regex.Matches(S,J[i].ToString()).Count;

        }
        return  result;
    }
}