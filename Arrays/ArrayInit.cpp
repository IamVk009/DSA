#include<iostream>
using namespace std;

// Function to print arrays.
void printArray(int aray[], int size){
   for(int i = 0; i < size; i++){
       cout << aray[i] << " ";
   }
}

int main(){

    // Declare and observe the default values.
    int arr[5];
    printArray(arr,5);
    cout<< endl;

    // Declaration and Initialisation on same line.
    int numbers[5] = {1,2,3,4,5};
    printArray(numbers, 5);
    cout << endl;

    // Initialise with Zero.
    int zero[5] = {0};
    printArray(zero,5);
    cout << endl;

    // Initialise with any Value.
    // https://stackoverflow.com/questions/1065774/initialization-of-all-elements-of-an-array-to-one-default-value-in-c
    
    int values[10];
    fill_n(values, 10, -1);
    printArray(values, 10);
}