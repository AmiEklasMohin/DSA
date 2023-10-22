#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumMountainWidth(vector<int>& mountain) {
        int maximum_width = 0;
        int n = mountain.size();
        for (int i = 1; i < (n - 1); ++i) {
            if (mountain[i] > mountain[i + 1] and mountain[i] > mountain[i - 1]) {
                int counter = 3, left = i - 1, right = i + 1;
                while (mountain[left] > mountain[left - 1] and left > 0) {
                    counter += 1;
                    left -= 1;
                }
                while (mountain[right] > mountain[right + 1] and right < (n - 1)) {
                    counter += 1;
                    right += 1;
                }
                i = right - 1;
                maximum_width = max(maximum_width, counter);
            }
        }
        return maximum_width;
    }
};

int main() {
    int num_of_points, in;
    cin >> num_of_points;
    vector<int> mountain;
    for (int i = 1; i <= num_of_points; ++i) {
        cin >> in;
        mountain.push_back(in);
    }
    Solution ans;
    int maximum_width = ans.maximumMountainWidth(mountain);
    cout<< maximum_width << endl;
    return 0;
}
