#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i = 0; i+1 < size; i += 2){
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int numbers[100];
    int size, key;
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter Array Elements : ";
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    swapAlternate(numbers, size);
    
    cout << "Array after alternate swap : ";
    printArray(numbers, size);
}