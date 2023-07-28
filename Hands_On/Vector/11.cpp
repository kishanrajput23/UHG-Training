#include<iostream>
#include<queue>

using namespace std;

void display_queue(queue<string> q) {

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main() {
    queue<string> animals;
    
    animals.push("Lion");
    animals.push("Tiger");
    animals.push("Fox");
    
    cout<<"Initial Queue : ";
    display_queue(animals);
    
    cout<<"After Pop Operation"<<endl;
    animals.pop();
    
    cout<<"Final Queue: ";
    display_queue(animals);
    
    return 0;
}
