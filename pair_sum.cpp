#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

vector<vector<int>> pairs(vector<int> vectr, int target) {
    unordered_set<int> uset;
    vector<vector<int>> result;
    for (int i = 0; i < vectr.size(); ++i) {
        int required = target - vectr[i];
        if (uset.find(required) != uset.end()) {
            result.push_back({required, vectr[i]});
        }
        uset.insert(vectr[i]);
    }
    return result;
}

int main() {
    int n, in, target;
    vector<int> vectr;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> in;
        vectr.push_back(in);
    }
    cin >> target;
    vector<vector<int>> result = pairs(vectr, target);
    if (result.size() == 0) {
        cout << "No such pairs" << endl;
    } else {
        for (int i = 0; i < result.size(); ++i) {
            for (int x : result[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

