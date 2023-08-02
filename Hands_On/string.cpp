#include<iostream>
using namespace std;

int main() {
    string *str = new string[3];
    
    *str = "Wipro";
    *(str+1) = "Technologies";
    *(str+2) = "Bangalore";

    cout<<"str[0] : "<<str[0]<<endl;
    cout<<"str[1] : "<<str[1]<<endl;
    cout<<"str[2] : "<<str[2]<<endl;

    return 0;
}