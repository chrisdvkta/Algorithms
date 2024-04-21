arr = [7,2,6,3,1]

def bubble_sort(list):
    unsorrted_until_index = len(list)-1
    sorted = False

    while not sorted:
        sorted = True
        for i in range(unsorrted_until_index):
            if list[i]>list[i+1]:
                list[i],list[i+1] = list[i+1], list[i]
                sorted = False
        unsorrted_until_index -=1
        
    return list


print(bubble_sort(arr))