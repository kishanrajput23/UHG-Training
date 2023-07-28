#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> numbers  = {1,2,3,4,5};
    
    cout<<"Initial list"<<endl;
    for (int n:numbers) {
        cout<<n<<" ";
    }
    cout<<endl;
    
    numbers.pop_front();
    numbers.pop_back();
    
    cout<<"Final list"<<endl;
    for (int n:numbers) {
        cout<<n<<" ";
    }
    cout<<endl;

    return 0;
}