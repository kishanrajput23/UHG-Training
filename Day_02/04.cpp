#include<iostream>
using namespace std;

void DecToHex(int num) {
    char arr[100];
    int i = 0;
    while(num!=0) {
        int temp = 0;
        temp = num % 16;
        if (temp < 10) {
            arr[i] = temp + 48;
            i++;
        } 
        else {
            arr[i] = temp + 55;
            i++;
        }
        num = num/16;
    }
    
    for (int j=i-1; j>=0; j--) {
        cout << arr[j];
    }
}

int main() {
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;

    cout<<"Hexadeciaml number : ";
   
    DecToHex(n);
    cout<<endl;
    return 0;
}