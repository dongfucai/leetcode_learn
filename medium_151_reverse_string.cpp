//
// Created by 董付财 on 2019/5/30.
//151. Reverse Words in a String
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 *  1 先反转
 *  2 空格的再反转
 *  3 去空格
 */

class Solution {
public:
    void reverse(string &s, int start, int end) {
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s) {

        int size = s.size() ;
        if (size == 0) {
            return "";
        }
        reverse(s, 0, size - 1);

        int start = 0;
        string res;
        for(int i = 0; i < size; ++i) {
            if(s[i] == ' ') {
                reverse(s, start, i-1);
                start = i + 1;
            }
            if(i == (s.size() -1 )) {
                reverse(s, start, i);
            }
        }

        int x = 0;
        int y = size - 1;
        while(s[x] == ' ') {
            x++;
        }
        while(s[y] == ' ') {
            y--;
        }
        for(int i = x ; i <= y; ++i) {
            res.push_back(s[i]);
            while(s[i]==' ' && (i + 1) <= y && s[i+1] == ' ') {
                i++;
            }
        }
        return res;
    }
};

int main() {


    std::cout << "Hello, World!" << std::endl;
    return 0;
}