#include<iostream>
using namespace std;

int CountSundays(string day, int n) {
    if (day == "mon") {
        n -= 6;
    }
    else if (day == "tue") {
        n -= 5;
    }
    else if (day == "wed") {
        n -= 4;
    }
    else if (day == "thu") {
        n -= 3;
    }
    else if (day == "fri") {
        n -= 2;
    }
    else if (day == "sat") {
        n -= 1;
    }
    else {
        n -= 0;
    }

    if (n>=0) {
        return (n/7) + 1;
    }
    return 0;
}

int main() {
    string day;
    int n;
    cout<<"Enter the day of the month (e.g., 'sun', 'mon', 'tue', etc.): ";
    cin>>day;

    cout<<"Enter the number of days : ";
    cin>>n;

    cout<<"Sundays : "<<CountSundays(day, n)<<endl;

    return 0;
}