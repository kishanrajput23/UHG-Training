#include<iostream>
using namespace std;

void CountVehicles(int v, int w) {

    if (w <=2 || w%2!=0 || v>w){
		cout<<"INVALID INPUT"<<endl;
	}

    float x = ((4 * v) - w) / 2;
  
    cout << "TW = " << x << " " << "FW = " << v - x<<endl;

}

int main() {
    int v,w;
    cout<<"Enter the number of vehicle : ";
    cin>>v;

    cout<<"Enter the number of wheels : ";
    cin>>w;

    CountVehicles(v, w);

    return 0;
}