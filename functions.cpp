#include <iostream>

using namespace std;

int multiply(int a,int b){

    return a*b;
}

int main(){
    int product;
    int one, two;
    cout << "Enter first number: \n";
    cin >> one;
    cout << "Enter second number: \n";
    cin >> two;
    product = multiply(5,6);
    cout << product <<endl;

    product = multiply(one, two);
    cout<<product<<endl;
    return 0;
    
}