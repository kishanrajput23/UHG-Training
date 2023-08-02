#include <iostream>
#include <algorithm>
using namespace std;

int find_min(int arr[], int size) {
    int mini = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    return mini;
}

int get_index(int arr[], int size, int height) {
    for (int i=0; i<size; i++) {
        if (arr[i] == height) {
            return i;
        }
    }
    return -1;
}

bool isInteger(string str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}


int main() {
    string n;
    int size;
    cout << "Enter the number of students in a class : ";
    cin >> n;

    if (isInteger(n)) {
        size = stoi(n);
    } else {
        cout << "Invalid input. Please enter an integer." << endl;
        exit(0);
    }

    int arr[size];
    cout << "Enter the heights of the students : ";
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int height;
    cout << "Enter heigth to search: ";
    cin >> height;
    cout<<"Index of paricular student is : " <<get_index(arr, size, height)<< endl;
    sort(arr, arr + size);

    cout << "Sorted heights in ascending order: ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int min_val = find_min(arr, size);
    
    cout << "Minimum height : " << min_val << endl;

    return 0;
}
