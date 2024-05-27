#include<iostream>

using namespace std;

double quadratic(double x, double y);

int main(){

    for(int i = 0; i < 100 ; i++){
        cout << quadratic(i,i) << endl;
    }

    return 0;
}

double quadratic(double x, double y){
    return (x * y);
}