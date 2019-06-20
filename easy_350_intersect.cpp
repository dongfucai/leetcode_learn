#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;


class Solution {

public:
    vector<int> intersection(vector<int> &num1, vector<int> &nums2) {

        map<int, int> record;
        for (int i = 0; i < num1.size(); ++i) {
            record[num1[i]]+=1;
        }
        vector<int> resultRecord;

        for (int j = 0; j < nums2.size(); ++j) {
            if (record[nums2[j]] > 0) {
                resultRecord.push_back(nums2[j]);
                record[nums2[j]]--;
            }
        }

        return resultRecord;

    }
};
int main() {

    Solution s;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}