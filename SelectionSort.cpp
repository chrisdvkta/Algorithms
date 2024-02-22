#include <iostream>

using namespace std;

int* selectionSort(int arr[],int arrayLen){
    for (int i = 0 ; i <arrayLen; i++){
    int lowestIndex= i; 
    for (int j = i+1; j<arrayLen;j++){
        if (arr[j]<arr[lowestIndex]){
            lowestIndex= j; 
        }
    }
    if (lowestIndex!=i){
        int temp = arr[i];
        arr[i] = arr[lowestIndex];
        arr[lowestIndex] = temp;
    }
}
    return arr;
}

int main(){
 int arr[5] = {4,5,1,3,7};
int arrayLen = sizeof(arr)/sizeof(int);
cout<<"Current array is  : "<<endl;

for (int i = 0 ; i<arrayLen;i++){
    cout<<arr[i]<<" ";
}
int* add = selectionSort(arr, arrayLen);
cout<<endl<<"SORTED ARRAY through bubble sort o(n^2) : "<<endl;
for (int i = 0 ; i<5;i++){
    cout<<*(add+i)<<" ";
}
}