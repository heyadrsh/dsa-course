#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printDuplicates(const unordered_map<int, int>& frequency) {
    for (const auto & entry : frequency) {
        if (entry.second > 1) {
            cout << "Duplicate element: " << entry.first << ", Count: " << entry.second << endl;
        }
    }
}

int main() {
    int row, col;
    cout << "Enter rows: ";
    cin >> row;

    cout << "Enter cols: ";
    cin >> col;

    vector<vector<int>> arr(row, vector<int>(col, 0));

    cout << "-----------Enter array values---------" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << i << "," << j << ": ";
            cin >> arr[i][j];
        }
    }

    unordered_map<int, int> frequency; // To store frequency of elements

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            frequency[arr[i][j]]++;
        }
    }

    cout << "Duplicate elements in the array:" << endl;
    printDuplicates(frequency);

    return 0;
}