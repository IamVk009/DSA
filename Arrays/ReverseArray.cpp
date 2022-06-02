#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        // Swapping Way - 1
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];

        // Way - 2
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int numbers[100];
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter Array Elements : ";
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    reverseArray(numbers, size);
    
    cout << "Reversed Array : ";
    printArray(numbers, size);
}