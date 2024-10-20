// CPP program to check if an array is
// sorted and rotated clockwise
#include <climits>
#include <iostream>

using namespace std;

// Function to check if an array is
// sorted and rotated clockwise
void checkIfSortRotated(int arr[], int n)
{
	int minEle = INT_MAX;
	int maxEle = INT_MIN;

	int minIndex = -1;

	// Find the minimum element
	// and it's index
	for (int i = 0; i < n; i++) {
		if (arr[i] < minEle) {
			minEle = arr[i];
			minIndex = i;
		}
	}

	int flag1 = 1;

	// Check if all elements before minIndex
	// are in increasing order
	for (int i = 1; i < minIndex; i++) {
		if (arr[i] < arr[i - 1]) {
			flag1 = 0;
			break;
		}
	}

	int flag2 = 1;

	// Check if all elements after minIndex
	// are in increasing order
	for (int i = minIndex + 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			flag2 = 0;
			break;
		}
	}

	// Check if last element of the array
	// is smaller than the element just
	// starting element of the array
	// for arrays like [3,4,6,1,2,5] - not circular array
	if (flag1 && flag2 && (arr[n - 1] < arr[0]))
		cout << "YES";
	else
		cout << "NO";
}

// Driver code
int main()
{
	int arr[] = { 3, 4, 5, 1, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	checkIfSortRotated(arr, n);
	return 0;
}

