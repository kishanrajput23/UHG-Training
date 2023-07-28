#include<iostream>
#include<queue>

using namespace std;

int main() {
    priority_queue<int> pq1;
    
    pq1.push(10);
    pq1.push(50);
    pq1.push(100);
    pq1.push(70);
    
    cout<<"Initial Priority Queue : ";
    while(!pq1.empty()) {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    
    pq1.pop();
    
    return 0;
}
