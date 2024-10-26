#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;
    int maxSum = INT32_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}
