#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    // Way - 1
    // int min = INT_MAX;
    // for(int i = 0; i < size; i++){
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }
    // }

    // Way - 2
    int minimum = INT_MAX;
    for(int i = 0; i < size; i++){
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}

int getMax(int arr[], int size){
    // Way - 1
    // int max = INT_MIN;
    // for(int i = 0; i < size; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }

    // Way - 2
    int maximum = INT_MIN;
    for(int i = 0; i < size; i++){
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}

int main(){
    int numbers[100];
    int size;
    cout <<  "Enter array size : " ;
    cin >> size;

    for(int  i = 0; i < size; i++){
        cin >> numbers[i];
    }

    cout << "Minimum value = " << getMin(numbers, size) << endl;
    cout << "Maximum value = " << getMax(numbers, size) << endl;
}