#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    v.push_back(1);
    
    vector<int>::iterator i;
    cout<<"v vector"<<endl;
    for(i=v.begin(); i!=v.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"v vector after pop operation"<<endl;
    for(i=v.begin(); i!=v.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    vector<int>::iterator it = v.begin();
    v.erase(it);
    cout<<"v vector after erase operation"<<endl;
    for(i=v.begin(); i!=v.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    vector<int> v1{10,20,30,40,50};
    v1.erase(v1.begin(), v1.end()-2);
     cout<<"v1 vector after erase operation"<<endl;
    for(i=v1.begin(); i!=v1.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    v.swap(v1);
     cout<<"v1 vector after swap operation"<<endl;
    for(i=v1.begin(); i!=v1.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
     cout<<"v vector after swap operation"<<endl;
    for(i=v.begin(); i!=v.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    v1.resize(11, 0);
     cout<<"v1 vector after resize operation"<<endl;
    for(i=v1.begin(); i!=v1.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    
     cout<<"v1 vector"<<endl;
    for (int n:v1) {
        cout<<n<<" ";
    }
    cout<<endl;
    
    return 0;
}
