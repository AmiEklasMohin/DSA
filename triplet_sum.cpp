#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> triplets(vector<int> vectr, int target) {
    vector<vector<int>> result;
    sort(vectr.begin(), vectr.end());
    int n = vectr.size();
    for (int i = 0; i < n - 2; ++i) {
        int j = i + 1;
        int k = n - 1;
        while(j < k) {
            int current_sum = vectr[i];
            current_sum += vectr[j];
            current_sum += vectr[k];
            if (current_sum == target) {
                result.push_back({vectr[i], vectr[j], vectr[k]});
                j += 1;
                k -= 1;
            } else if (current_sum > target) {
                k -= 1;
            } else {
                j += 1;
            }
        }
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
    vector<vector<int>> result = triplets(vectr, target);
    for (int i = 0; i < result.size(); ++i) {
        for (int x: result[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
