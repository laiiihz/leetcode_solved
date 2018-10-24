#include <iostream>
#include <stack>
using namespace std;


class Solution {
public:
    string simplifyPath(string path) {
        stack<string> master_stack;
        for(int i=0;i<path.length();i++){
            if(path[i]=='/')continue;
            else if(path[i]!='.'&&path[i]!='/'){
                string temp;
                int temp_n=i;
                while(path[temp_n]!='/'&&temp_n<=path.length()){
                    temp.append(1,path[temp_n]);
                    temp_n++;
                }
                master_stack.push(temp);
                i=temp_n;
            }
            else if(path[i]=='.'&&path[i+1]!='.'&&path[i+1]!='/'&&(i+1)!=path.length()){
                string temp;
                int temp_n=i;
                while(path[temp_n]!='/'&&temp_n<=path.length()){
                    temp.append(1,path[temp_n]);
                    temp_n++;
                }
                master_stack.push(temp);
                i=temp_n;
            }
            else if(path[i]=='.'&&path[i+1]=='/'){
                i=i+1;
                continue;
            }else if(path[i]=='.'&&(i+1)==path.length()){

            } else if(path[i]=='.'
                     &&path[i+2]!='/'
                     &&(i+2)!=path.length()
                    ){
                string temp;
                int temp_n=i;
                while(path[temp_n]!='/'&&temp_n<=path.length()){
                    temp.append(1,path[temp_n]);
                    temp_n++;
                }
                master_stack.push(temp);
                i=temp_n;
            } else if(path[i]=='.'&&path[i+1]=='.'&&path[i+2]=='/'){
                i=i+2;
                if(master_stack.empty())continue;
                else master_stack.pop();
            }else if(path[i]=='.'&&path[i+1]=='.'&&i+2==path.length()){
                i=i+2;
                if(master_stack.empty())continue;
                else master_stack.pop();
            } else if(path[i]=='.'&&(i+1)!=path.length()){
                continue;
            }

        }

        stack<string> result_stack;
        while (!master_stack.empty()){
            result_stack.push(master_stack.top());
            master_stack.pop();
        }

        string result;
        result.append("/");
        while(!result_stack.empty()){

            result.append( result_stack.top());
            char temp=result_stack.top()[0];
            result_stack.pop();
            if(!result_stack.empty())result.append("/");
        }
        return result;
    }
};

int main() {
    Solution solution;
    string result=solution.simplifyPath("////exhsadw/..");
    std::cout << result << std::endl;
    return 0;
}