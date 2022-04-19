#include<iostream>
using namespace std;
int medianRowwiseSortedMatrix(int matrix[N][M])
{
    int min = INT_MAX;
    int max = INT_MIN;
    int desired_count = (1+(N*M)/2))
   for(int i=0;i<N;i++)
    {
        if(A[i][0]<min)
        min = A[i][0];
        if(A[i][M-1]>max)
        max = A[i][M-1];
    }
    int counter =0;
    while(min<max)
    {
        counter=0;
        int mid = (max+min)/2;
        for(int i= 0;i<N;i++)
        {
            counter += upper_bound(A[i], A[i]+M, mid) -  A[i];
        }
        if(counter < desired_count)
            min = mid+1;
        else
            max = mid;
    }
    return min;
}
