#include <iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    int max = arr[0];

    // find maximum
    for(int i=1;i<n;i++)
        if(arr[i] > max)
            max = arr[i];

    int count[max+1] = {0};

    // count frequency
    for(int i=0;i<n;i++)
        count[arr[i]]++;

    // rebuild sorted array
    int index = 0;

    for(int i=0;i<=max;i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {4,2,2,8,3,3,1};
    int n = 7;

    countingSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}