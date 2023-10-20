#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = n - i;
    }
    // selection_sort
    auto start_time = clock();
    for (int i = 0; i < n; ++i) {
        int index = i;
        for (int j = (i + 1); j < n; ++j) {
            if (arr[i] > arr[j]) {
                index = j;
            }
        }
        if (index != i) {
            swap(arr[index], arr[i]);
        }
    }
    auto finish_time = clock();
    cout << "Runtime = "<< finish_time - start_time << "ms" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
