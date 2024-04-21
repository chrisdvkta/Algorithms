#include <iostream>
#include <stdbool.h>

using namespace std; 

int *bubbleSort(int arr[], int size){
    int unsorted_until_index = size -1;
    bool sorted = false; 

    while (!sorted){
        sorted = true;
        for (int i =0 ; i<=size-1; i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = false;
            }
        }
        unsorted_until_index-=1;
    }
    return arr; 
}


int main() { 
    int arr[10] = {65,55,45,43,32,25,20,15,5,8};
    int *result = bubbleSort(arr,10);
    for (int i = 0 ; i<10;i++){
        cout<<*(result+i)<<" , ";
    }
}