arr = [80,90,10,12,15,77,55,23]

def Heapify(arr,size,i):
    i = size/2 -1
    currentElement = arr[i]
    largest = arr[i]
    if largest<arr[2*i+1]:
        largest = arr[2*i+1]
    elif largest<arr[2*i+2]:
        largest = arr[2*i+2]
    temp = currentElement
    currentElement = largest
    largest = temp
    

def MaxHeap(arr,size):
    non_leaf = size/2 -1


    