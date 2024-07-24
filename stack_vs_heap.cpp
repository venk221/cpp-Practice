#include <iostream>

using namespace std;

struct Vector3
{
    float x,y,z;

    Vector3()
    : x(10),y(11),z(12) {}
};

int main(){
    /*stack allocations*/
    //integers in stack
    int value = 5;
    //arrays in stack
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    //structs in stack
    Vector3 vector;

    /*heap allocations*/
    // integers in heap
    int* hvalue = new int;
    *hvalue = 5;
    //arrays in heap
    int* harray = new int[5]{10, 20, 30, 40, 50};
    //structs in heap
    Vector3* hvector = new Vector3;

    cout << hvector->z <<endl;

    delete hvalue;  //manually delete the allocated memory in heaps
    delete[] harray;
    delete hvector;
    return 0;
  }