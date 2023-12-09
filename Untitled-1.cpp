#include <iostream>
using namespace std;

int findElementIndex(int arr[], int element, int index, int size) {
    // Base case: If the entire array is traversed and element not found
    if (index >= size) {
        return -1;
    }

    // If the element is found, return its index
    if (arr[index] == element) {
        return index;
    }

    // Recursive case: Search in the rest of the array
    return findElementIndex(arr, element, index + 1, size);
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int element = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = findElementIndex(arr, element, 0, size);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
