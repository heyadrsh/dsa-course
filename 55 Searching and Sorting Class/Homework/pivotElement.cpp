#include <iostream>
using namespace std;

int findPivot(int array[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (array[mid] > array[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}

int main() {
    int rotatedArray[] = {6, 7, 8, 1, 2, 3, 4, 5};
    int size = sizeof(rotatedArray) / sizeof(rotatedArray[0]);

    int pivotIndex = findPivot(rotatedArray, size);

    cout<<"The Pivot Element is: "<<rotatedArray[pivotIndex]<<" at index of "<<pivotIndex<<"."<<endl;

    return 0;
}