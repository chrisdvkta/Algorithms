arr = [0,9,1,8,2,7,3,6,4,5];
# choose the lowest element of the array n place it to the beginning 

def SelectionSort(arr, size):
    for i in range(0,size):
        lowestIndex = i; 
        for j in range (i+1,size):
            if arr[j]<arr[lowestIndex]:
                lowestIndex=j
        if lowestIndex!=i:
            temp = arr[i]
            arr[i] = arr[lowestIndex]
            arr[lowestIndex] = temp
    return arr


print(SelectionSort(arr,len(arr)));