#include<iostream>
using namespace std;

void printPattern(int num, int row) {
    for (int i=1; i<=row; i++) {
        for (int j=1; j<=i; j++) {
            cout<<num;
        }
        num++;
        cout<<endl;
    }
    --num;
    for (int i=row-1; i>=1; i--) {
        --num;
        for (int j=i; j>=1; j--) {
            cout<<num;
        }
        cout<<endl;
    } 
}

int main() {

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;

    printPattern(num, row);
    return 0;
}