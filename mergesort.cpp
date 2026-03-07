#include<iostream>
using namespace std;
void merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }
    for (int j = 0; j < n2; j++)
    {

        R[j] = A[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            k++;
            i++;
        }
        else
        {
            A[k] = R[j];
            k++;
            j++;
        }
    }
    while (j < n2)
    {
        A[k] = R[j];
        k++;
        j++;
    }
    while (i< n1)
    {
        A[k] = L[i];
        k++;
        i++;
    }
}
void mergesort(int A[],int left,int right){
    if(left>=right) return;
    int mid=(left+right)/2;
    mergesort(A,left,mid);
    mergesort(A,mid+1,right);
    merge(A,left,mid,right);
}
int main(){
    int arr[8]={5,3,4,1,6,8,7,2};
    mergesort(arr,0,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";

    }
}
