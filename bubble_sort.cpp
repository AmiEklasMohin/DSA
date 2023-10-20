#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    auto start_time = clock();
    for (int i = 0; i < (n - 1); ++i) {
        for (int j = 0; j < (n - i - 1); ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    auto finish_time = clock();
    cout <<"Runtime = "<< finish_time - start_time << "ms" << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = n - i;
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
