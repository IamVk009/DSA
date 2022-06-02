#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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