#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n)
{
    vector<float> bucket[n];

    for(int i=0;i<n;i++)
    {
        int index = n * arr[i];
        bucket[index].push_back(arr[i]);
    }

    for(int i=0;i<n;i++)
        sort(bucket[i].begin(), bucket[i].end());

    int k = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<bucket[i].size();j++)
        {
            arr[k++] = bucket[i][j];
        }
    }
}

int main()
{
    float arr[] = {0.42,0.32,0.23,0.52,0.25,0.47};
    int n = 6;

    bucketSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}