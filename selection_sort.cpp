#include <iostream>
#include <ctime>
using namespace std;

void printArray (int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
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
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = n - i;
    }
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
