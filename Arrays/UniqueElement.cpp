#include<iostream>
using namespace std;

/*
    a ^ a = 0;
    0 ^ a = a;
*/
int getUnique(int arr[], int size){
    int unique = 0;
    for(int i = 0; i < size; i++){
        unique ^= arr[i];
    }
    return unique;
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

    cout << "Unique element in entered array = " << getUnique(numbers, size);
}