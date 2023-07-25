#include<iostream>
using namespace std;

class sample {
    public:
    int n;
    int *p;

    void print() {
        for (int i=0; i<n; i++) {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
};

istream& operator >>(istream& cin, sample &s) {
    cout<<"Enter number of elements : ";
    cin>>s.n;

    s.p = new int[s.n];
    cout<<"Enter "<<s.n<<" elements : ";

    for (int i=0; i<s.n; i++) {
        cin>>s.p[i];
    }

    return cin;
}

int main() {

    sample s;

    cin>>s;
    s.print();

    return 0;
}