#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int numbers[100];
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }
    cout << "sum of all elements in the array = " << getSum(numbers, size);
}