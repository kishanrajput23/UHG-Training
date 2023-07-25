#include<iostream> 
#include<fstream>

using namespace std;

int main () {
    ofstream filestream ("test3.txt", ios::out|ios::ate);
    if (filestream.is_open ()) {
        filestream<<"Hello world";
        filestream.seekp(6); 
        filestream<<"wipro world";
        filestream.close();
    }
    else {
        cout<<"File opening failed";
    }
    return 0;
}