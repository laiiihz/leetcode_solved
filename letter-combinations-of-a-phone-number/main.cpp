#include <iostream>
#include <vector>
#include <map>
using namespace std;




class Solution {
public:
    string single_result;
    vector<string > result;
    vector<string> letterCombinations(string digits) {

        int length=digits.length();
        if(length<=0)return result;
        func(digits,single_result);
        return result;

    }

    void func(string digits,string single_result){
        if(digits=="")result.push_back(single_result);
        switch (digits[0]){
            case '2':
                func(digits.substr(1,digits.length()-1),single_result+"a");
                func(digits.substr(1,digits.length()-1),single_result+"b");
                func(digits.substr(1,digits.length()-1),single_result+"c");
                break;
            case '3':
                func(digits.substr(1,digits.length()-1),single_result+"d");
                func(digits.substr(1,digits.length()-1),single_result+"e");
                func(digits.substr(1,digits.length()-1),single_result+"f");
                break;
            case '4':
                func(digits.substr(1,digits.length()-1),single_result+"g");
                func(digits.substr(1,digits.length()-1),single_result+"h");
                func(digits.substr(1,digits.length()-1),single_result+"i");
                break;
             case '5':
                func(digits.substr(1,digits.length()-1),single_result+"j");
                func(digits.substr(1,digits.length()-1),single_result+"k");
                func(digits.substr(1,digits.length()-1),single_result+"l");
                break;
            case '6':
                func(digits.substr(1,digits.length()-1),single_result+"m");
                func(digits.substr(1,digits.length()-1),single_result+"n");
                func(digits.substr(1,digits.length()-1),single_result+"o");
                break;
            case '7':
                func(digits.substr(1,digits.length()-1),single_result+"p");
                func(digits.substr(1,digits.length()-1),single_result+"q");
                func(digits.substr(1,digits.length()-1),single_result+"r");
                func(digits.substr(1,digits.length()-1),single_result+"s");
                break;
            case '8':
                func(digits.substr(1,digits.length()-1),single_result+"t");
                func(digits.substr(1,digits.length()-1),single_result+"u");
                func(digits.substr(1,digits.length()-1),single_result+"v");
                break;
            case '9':
                func(digits.substr(1,digits.length()-1),single_result+"w");
                func(digits.substr(1,digits.length()-1),single_result+"x");
                func(digits.substr(1,digits.length()-1),single_result+"y");
                func(digits.substr(1,digits.length()-1),single_result+"z");
                break;
            default:
                break;


        }
    }
};




int main() {
    Solution solution;
    vector <string >result;
    result=solution.letterCombinations("23");
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}