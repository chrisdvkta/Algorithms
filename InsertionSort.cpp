#include <iostream>

using namespace std;

int *insertionSort(int arr[], int size)
{

    for (int i = 1; i <= size; i++)
    {
        int temp = arr[i];
        int position = i - 1;
        while (position >= 0)
        {
            if (arr[position] > temp)
            {
                arr[position + 1] = arr[position];
                position = position - 1;
            }
            else
            {
                break;
            }

            arr[position + 1] = temp;
        }
    }
    return arr;
}

int main()
{
    int arr[6] = {5,
                  4,
                  2,
                  3,
                  7,
                  1};

    int arrSize = sizeof(arr) / sizeof(int);

    int *res = insertionSort(arr, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        cout << *(res + i) << " ";
    }
}