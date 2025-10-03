#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int val) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == val) {
            return mid;
        } else if (arr[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int size;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " sorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int val;
    cout << "Enter the value to be searched: ";
    cin >> val;

    int result = binarySearch(arr, size, val);
    if (result != -1) {
        cout << "Element found at index: " << result << '\n';
    } 
    else {
        cout << "Element not found in the array" << '\n';
    }
    return 0;
}
/*
Output:
Case 1:
Enter the number of elements in the sorted array: 6
Enter 6 sorted elements: 1 3 5 7 9 11
Enter the value to be searched: 7
Element found at index: 3

Case 2:
Enter the number of elements in the sorted array: 6
Enter 6 sorted elements: 1 3 5 7 9 11
Enter the value to be searched: 4
Element not found in the array
*/
