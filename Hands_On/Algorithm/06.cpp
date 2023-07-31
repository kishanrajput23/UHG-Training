#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1,4,8,2,7,5,9,3,6};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr+2, arr+size, greater<int>());    //sort in descending order irrespective of 1st two elements
    
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
