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
    // bubble_sort
    auto start_time = clock();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    auto finish_time = clock();
    cout <<"Runtime = "<< finish_time - start_time << "ms" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
