#include<iostream>

using namespace std;
 
int main()
{
    string hexNumber;
    cout<<"Enter the hexadecimal value : ";
    cin >> hexNumber;
    
    int base = 16;

    // format stoi(hexaDecimal_in_string_format, 0, base_value)

    cout << "Decimal value : "<< stoi(hexNumber, 0, base) << endl;
 
    return 0;
}