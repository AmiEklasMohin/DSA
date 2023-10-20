#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maximumMountainWidth(vector<int> vectr, int n) {
    int maximum_width = 0;
    for (int i = 1; i < (n - 1); ++i) {
        if (vectr[i] > vectr[i + 1] and vectr[i] > vectr[i - 1]) {
            int counter = 3, left = i - 1, right = i + 1;
            while (vectr[left] > vectr[left - 1] and left > 0) {
                counter += 1;
                left -= 1;
            }
            while (vectr[right] > vectr[right + 1] and right < (n - 1)) {
                counter += 1;
                right += 1;
            }
            i = right - 1;
            maximum_width = max(maximum_width, counter);
        }
    }
    return maximum_width;
}

int main() {
    int n, in;
    cin >> n;
    vector<int> vectr;
    for (int i = 1; i <= n; ++i) {
        cin >> in;
        vectr.push_back(in);
    }
    int maximum_width = maximumMountainWidth(vectr, n);
    cout<< maximum_width << endl;
    return 0;
}
