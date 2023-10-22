#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestBand(vector<int>& nums) {
        unordered_set<int> uset;
        int largest_band = 0;
        for (int i = 0; i < nums.size(); ++i) {
            uset.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i] - 1;
            int counter = 0;
            if (uset.find(x) == uset.end()) {
                while (uset.find(++x) != uset.end()) {
                    counter += 1;
                }
            }
            largest_band = max(largest_band, counter);
        }
        return largest_band;
    }
};

int main() {
    int num_of_elements, in;
    vector<int> nums;
    cin >> num_of_elements;
    for (int i = 1; i <= num_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    int largest_band = ans.largestBand(nums);
    cout << largest_band << endl;
    return 0;
}
