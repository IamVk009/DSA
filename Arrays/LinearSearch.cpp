#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
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

    cout << "Enter key to search in array = ";
    cin >> key;

    if(LinearSearch(numbers, size, key)){
        cout << "Key is Present";
    }
    else{
        cout << "Key is Absent";
    }
}