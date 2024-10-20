#include <iostream>
using namespace std;

int findSecondLargest(const int array[], int size) {
    int largest = array[0];
    int secondLargest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } 
        else if (array[i] > secondLargest && array[i] < largest) {
            secondLargest = array[i];
        }
    }

    return secondLargest;
}

int main() {
    const int MAX_SIZE = 100;
    int size, i, secondLargest;
    int arr[MAX_SIZE];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) 
        cin >> arr[i];
    
    secondLargest = findSecondLargest(arr, size);

    cout << "The second largest element in the array is: " << secondLargest;

    return 0;
}
