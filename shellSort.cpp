#include <iostream>

using namespace std; 


int *shellSort(int arr[], int size){
    for (int interval = size/2;interval>0;interval/=2)
{
    for (int i = interval;i<size;i++){
        int temp = arr[i];
        int j ;
        for (j = i; j>=interval && arr[j-interval]>temp; j-=interval){
            arr[j] = arr[j-interval];
        }
        arr[j] = temp;
    }
}
return arr;
}

int main(){ 
    int arr[] = {8,5,6,3,4,6,8,9};
    int *res = shellSort(arr,sizeof(arr)/sizeof(int));
    for (int i = 0; i<sizeof(arr)/sizeof(int);i++){
        cout<<*(res+i)<<" , ";
    }
}