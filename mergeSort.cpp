#include <bits/stdc++.h>
#include <iostream>

using namespace std; 


void merge(int arr[], int start, int mid, int end ){
    int i, j,k; 
    int n1 = mid-start+1;
    int n2 = end-mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0, j = 0 ; i<n1 && j<n2 ;i++,j++){
        leftArr[i] = arr[start+1];
        rightArr[j] = arr[mid+1+j];
    }
    i = 0; 
    j = 0 ; 
    k = start;

    while (i<n1 && j<n2){
        if (leftArr[i]<=rightArr[j]){
            arr[k] =leftArr[i];
            i++; 
        }
        else{
            arr[k]  = rightArr[j];
            j++;

        }
        k++;
    }

    while (j<n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }

}


void mergeSort (int arr[], int start, int end){
    if (start<end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}


void printArr(int arr[], int n){
    for (int i = 0 ;  i < n ;i++){
        cout<<arr[i]<<" ";
    }
}


int main() { 
    int arr[] = {11,39,24,7,31,16,39,41};
    int n = sizeof(arr)/ sizeof(int);
    mergeSort(arr,0,n-1);
    printArr(arr,n);
}