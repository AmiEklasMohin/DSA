#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> pairSum(vector<int> vectr, int target) {
    unordered_set<int> st;
    vector<int> res;
    for (int i = 0; i < vectr.size(); ++i) {
        int required = target - vectr[i];
        if (st.find(required) != st.end()) {
            res.push_back(required);
            res.push_back(vectr[i]);
            break;
        }
        st.insert(vectr[i]);
    }
    return res;
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
    vector<int> result = pairSum(vectr, target);
    if (result.size() == 0) {
        cout << "No such pairs" << endl;
    } else {
        cout << result[0] << ' ' << result[1] << endl;
    }
    return 0;
}
