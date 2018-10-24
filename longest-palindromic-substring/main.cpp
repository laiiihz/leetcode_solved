#include <iostream>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string max;
        if(s.length()==1)return s;
        if(s.length()==2&&s[0]==s[1])return s;
        int max_t=0;
        int max_left=0;
        int max_right=0;
        if(s[0]==s[1])max=s[0]+s[1];
        for(int i=1;i<s.length();i++){
            int left=i-1;
            if(i==6){
                int b=11;
            }
            int right=i+1;
            if(s[i]==s[left]&&s[i]!=s[right])right=i;
            else if(s[i]==s[right]&&s[i]!=s[left])left=i;


            while(left!=-1&&right!=s.length()+1){
                if(s[left]==s[right]){
                    if(max_t<(right-left+1)) {
                        max_t = right - left + 1;
                        max_left=left;
                        max_right=right;
                        cout<<max_left<<" "<<max_right<<endl;
                    }

                    left--;
                    right++;
                }else break;
            }
        }
        for(int i=1;i<s.length();i++){
            int left=i-1;
            if(i==6){
                int b=11;
            }
            int right=i+1;
            if(s[i]==s[left]&&s[i]!=s[right])right=i;
            else left=i;


            while(left!=-1&&right!=s.length()+1){
                if(s[left]==s[right]){
                    if(max_t<(right-left+1)) {
                        max_t = right - left + 1;
                        max_left=left;
                        max_right=right;
                        cout<<max_left<<" "<<max_right<<endl;
                    }

                    left--;
                    right++;
                }else break;
            }
        }
        if(max_t==0){
            string result;
            result+=s[0];
            return result;
        }
        return s.substr(max_left,max_t);
    }
};
int main() {
    string a="aa";
    Solution solution;
    string b=solution.longestPalindrome(a);
    cout<<b<<endl;
    return 0;
}
