#include<iostream>
using namespace std;

void oddEvenOnlineGame(int size, int arr[]) {
    int odd[size], even[size];
    int cnt1=0, cnt2=0;

    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) {
            even[cnt1] = arr[i];
            cnt1++;
        }
        else {
            odd[cnt2] = arr[i];
            cnt2++;
        }
    }

    int arr1[cnt1+cnt2-2];
    int itr = 0;
    for (int i=0; i<cnt1; i++) {
        arr1[itr] = even[i];
        itr++;
    }
    
    for (int i=0; i<cnt2; i++) {
        arr1[itr] = odd[i];
        itr++;
    }

    for (int i=0; i<itr; i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

}

int main() {

    int arr[8] = {10, 98, 3, 33, 12, 22, 21, 11};

    oddEvenOnlineGame(8, arr);

    return 0;
}