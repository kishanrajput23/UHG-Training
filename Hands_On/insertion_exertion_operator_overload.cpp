#include <iostream>

using namespace std;

#define N 3
#define M 3

class Matrix {
    
    int arr[N][M];
    public:
    friend istream& operator >>(istream&, Matrix&);
    friend ostream& operator <<(ostream&, Matrix&);
    
    int& operator ()(int i, int j) {
        return arr[i][j];
    }
};

istream& operator >>(istream& cin, Matrix &m) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin>>m(i,j);
        }
    }
    return cin;
}

ostream& operator <<(ostream& cout, Matrix &m) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout<<m(i,j)<<" ";
            cout<<endl;
        }
    }
    return cout;
}


int main()
{
    Matrix m;
    cout<<"Enter the matrix : ";
    cin>>m;
    
    cout<<"Matrix is : ";
    cout<<m;

    return 0;
}
