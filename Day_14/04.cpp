#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int DecToBin(int n) {
    int ans = 0;
    int i=0;

    while(n!=0) {
        int bit = n&1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

int ToogleBit(int n) {
    string s = to_string(n);

    for (int i=0; i<s.length(); i++) {
        if (s.at(i)=='0') {
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }

    return stoi(s);
}

int BinToDec(int n) {
    int i = 0, ans = 0 ;

    while( n != 0) {
        int digit = n % 10;
        if( digit == 1) {
            ans = ans + pow(2, i);
        }
        n /= 10;
        i++;

    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter a integer value : ";
    cin>>n;
    int num1 = DecToBin(n);

    int num2 = ToogleBit(num1);

    int num3 = BinToDec(num2);
    
    cout<<num3<<endl;

    return 0;
}