#include <iostream>

using namespace std;
// Helper function
int binarySearch(int array[], int target, int start, int end){
    if(start <= end){
        int middle = start + (end-start)/2;

        if(array[middle] == target) return middle;
        // if value at middle is less than target then the answer will be in the right half
        else if(array[middle] <= target){
            return binarySearch(array, target, middle+1, end);
        }
        // Otherwise in left half
        else{
            return binarySearch(array, target, start, middle-1);
        }
    }
    return -1;
}

int binSearch(int array[], int size, int target){
    return binarySearch(array, target, 0, size-1);
}
int main() {
    int array[] = {-1, 1, 3, 9, 11, 15};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Here is the list of the array: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    int target;
    cout << "\nEnter your target: ";
    cin >> target;
    cout << binSearch(array, size, target);
    return 0;
}