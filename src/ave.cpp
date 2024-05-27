#include<iostream>

using namespace std;

double ave(double x, double y);

int main(){

    cout << ave(1,2) << endl;
    
    return 0;
}

double ave(double x, double y)
{
    return (x + y) / 2;
}