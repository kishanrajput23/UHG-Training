#include <iostream>
using namespace std;

int findMax(int x, int y) {
    return x ^ ((x ^ y) & -(x < y));
}
 
int main()
{
    int x = 2, y = 4;
    cout << "Maximum number is : " << findMax(x, y) << endl;
 
    return 0;
}