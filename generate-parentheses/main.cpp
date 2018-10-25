#include <iostream>
#include <vector>
#include <stack>
using namespace std;



class Solution {
public:
    vector <string > result;
    string single_result;
    int left;
    int right;
    vector<string> generateParenthesis(int n) {
        stack<char> A;
        right=n;
        left=n;
        fun(2*n,single_result,0,0);
        return result;
    }

    void fun(int n,string single_result,int left,int right){
        if(n==0) {
            if(left==right){
                stack <char> B;
                for(int i=0;i<single_result.length();i++){
                    if(single_result[i]=='(')B.push(single_result[i]);
                    else if(single_result[i]==')'&& !B.empty()){
                      if(B.top()=='(')B.pop();
                    }
                    else B.push(')');
                }
                if(B.empty()){
                    result.push_back(single_result);
                }

            }
            return;
        }
        fun(n-1,single_result+"(",left+1,right);
        fun(n-1,single_result+")",left,right+1);
    }
};




int main() {
    Solution solution;
    vector<string> A;
    A=solution.generateParenthesis(4);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<endl;
    }
    return 0;
}