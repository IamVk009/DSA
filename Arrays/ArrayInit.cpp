#include<iostream>
using namespace std;

int main(){

    // Declare and observe the default values.
    int arr[5];
    for(int  i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;

    // Declaration and Initialisation on same line.
    int numbers[5] = {1,2,3,4,5};

    // Initialise with Zero.
    int zero[5] = {0};
    for(int  i = 0; i < 5; i++){
        cout << zero[i] << " ";
    }
    cout << endl;

    // Initialise with any Value.
    // https://stackoverflow.com/questions/1065774/initialization-of-all-elements-of-an-array-to-one-default-value-in-c
    
    int values[10];
    fill_n(values, 10, -1);
    for(int  i = 0; i < 10; i++){
        cout << values[i] << " ";
    }
}