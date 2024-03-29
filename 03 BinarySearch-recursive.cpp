// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int search(int arr[], int n, int x)
{
	return binarySearchRecr(arr, 0, n-1, x);
}

// A recursive binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binarySearchRecr(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
	} 
} 


// Driver code
int main(void)
{
    time_t t1,t2;
    srand(time(0));	
	
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

    time(&t1);
	int result = search(arr, n, x);
    time(&t2);

	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;

    cout << endl;
	double sort_time = t2-t1;
    cout << "Time taken by sortArray: " << sort_time << " seconds" << endl << endl;

    return 0;
}
