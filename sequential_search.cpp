#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
/*
Output:
Case 1:
Enter number of elements: 6
Enter elements: 4 5 1 3 7 9
Enter element to search: 3
Element found at index 3

Case 2:
Enter number of elements: 6
Enter elements: 4 5 1 3 7 9
Enter element to search: 25
Element not found in the array.
*/
