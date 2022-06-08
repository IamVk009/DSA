// CodeStudio Question - 187
#include<iostream>
using namespace std;

// Way - 1 (Using XOR)
/*
    a ^ a = 0;
    0 ^ a = a;
*/
// int getUnique(int arr[], int size){
//     int unique = 0;
//     for(int i = 0; i < size; i++){
//         unique ^= arr[i];
//     }
//     return unique;
// }

// Way - 2 (Without Using XOR)

int getUnique2(int arr[], int size){
    int count;
    for(int i = 0; i < size; i++){
        count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return 0;
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

    cout << "Unique element in entered array = " << getUnique2(numbers, size);
}