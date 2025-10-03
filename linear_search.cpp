#include <iostream>
int search(int arr[], int size, int val) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == val) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int val;
    std::cout << "Enter the value to be searched: ";
    std::cin >> val;

    int result = search(arr, size, val);
    if(result != -1) {
        std::cout << "Element found at index: " << result << '\n';
    } else {
        std::cout << "Element not found in the array" << '\n';
    }

    return 0;
}

/*
Output:
Case 1:
Enter the number of elements in the array: 7
Enter 7 elements: 9 8 5 1 0 3 2
Enter the value to be searched: 3
Element found at index: 5

Case 2:
Enter the number of elements in the array: 7
Enter 7 elements: 9 8 5 1 0 3 2
Enter the value to be searched: 7
Element not found in the array
*/
