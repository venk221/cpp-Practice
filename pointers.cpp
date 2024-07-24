#include <iostream>

using namespace std;

void increment_by_value(short value){      //need to return for the update
    value++;
}

void increment_by_pointer(short* value){
    (*value)++;
}

void increment_by_pointer1(short* value){
    *value++;
}

void increment_by_reference(short& value){
    value++;
}

int main(){

    short var = 8;
    short* ptr = &var;
    short& ref = var;

    cout <<"Var= "<< var << endl <<"Ptr=" << ptr << endl <<"&ptr=" << &ptr << endl <<"&var=" << &var << endl
    <<"ref=" << ref << endl <<"&ref=" << &ref << endl; 

    // Referencing   

    *ptr = 10;
    cout << "var= "<<var << endl;

    increment_by_value(var);

    cout <<"increment_by_value = " << var<< endl;

    increment_by_pointer(ptr);
    cout <<"increment_by_pointer = " << var<< endl;

    increment_by_pointer1(&var);
    cout <<"increment_by_pointer1 = " << var<< endl;   //it is doing ++ first then 

    increment_by_reference(var);
    cout <<"increment_by_reference = " << var<< endl;

    return 0;
  }