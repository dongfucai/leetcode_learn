//
// Created by 董付财 on 2019/6/26.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>




class Solution {
public:
    int scoreOfParentheses(string S) {

        if(S.size() == 0) {
            return 0;
        }
        stack<int> st;
        int res = 0 ;

        for(int i = 0; i < S.size() ; ++i) {

            if(S[i] == '(') {
                st.push(res);
                res = 0;
            } else {

                res = st.top() + max(res*2, 1);
                st.pop();
            }
        }

        return res;



    }
};



using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}