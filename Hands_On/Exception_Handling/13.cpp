#include <iostream>
using namespace std;
void findFactorial(int N) {
    int factorial = 1;
    try {
        if (N<0) {
            throw invalid_argument("nrgative not allowed");
        }
        for(int i=N; i>0; i--) {
            factorial *= i;
        }
        cout<<"Factorial of "<<N<<" is "<<factorial<<endl;
    }
    catch (exception& e) {
        cout<<e.what();
    }
}

int main() {
    findFactorial(0);
    findFactorial(3);
    findFactorial(-2);    
    return 0;
}
