//
// Created by 董付财 on 2019/6/12.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>


using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int res = 0;
        double cur = 0.0;

        map<int, double> pos2Time;

        for (int i = 0; i < position.size(); ++i) {
            pos2Time[-position[i]] = (target - position[i])*1.0 / speed[i];
        }

        for (auto a : pos2Time) {
            if (a.second <= cur) {
                continue;
            }
            cur = a.second;
            res++;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}