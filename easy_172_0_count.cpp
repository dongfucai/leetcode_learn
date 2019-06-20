#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Solution {

public:
    int zeroCount(int n) {
        return n == 0 ?  0 : (n/5 + zeroCount(n/5));
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution s;
    int count = s.zeroCount(100);

    cout << count << endl;
    return 0;
}