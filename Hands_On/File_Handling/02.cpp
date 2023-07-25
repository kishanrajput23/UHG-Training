#include <iostream>
#include<fstream> 

using namespace std;

int main() {
    string input;
    ofstream os;
    os.open("test2.txt");

    cout<<"Enter a name : ";
    getline(cin, input);
    os<<"Name : "<<input<<endl;

    cout<<"Enter age : ";
    cin>>input;
    os<<"Age : "<<input<<endl;

    return 0;
}