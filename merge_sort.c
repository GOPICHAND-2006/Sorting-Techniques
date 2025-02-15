/*==========================================================================================================================================================*/
        // Time complextiy   Best Case: O(n log n)
                            //Average Case: O(n log n)
                            //Worst Case: O(n log n)

/*============================================================================================================================================================*/
#include<stdio.h>
void merge(int A[],int n,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    int B[n];
    int k=0;
    while(i<=mid && j<=end){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    //add the remaining elements of the first half
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    //add the remaining elements of the second half
    while(j<=end){
        B[k]=A[j];
        j++;
        k++;
    }
    // because we have to copy the elements of B to A(orginal array)
    k=0;// because k is already incremented
    for(int i=start;i<=end;i++){
        A[i]=B[k];
        k++;
    }
}
void merge_sort(int A[],int n,int start,int end){
    //base case
    if(start>=end) return;
    int mid=(start+end)/2;
    merge_sort(A,n,start,mid);//first half
    merge_sort(A,n,mid+1,end);//second half
    merge(A,n,start,mid,end);//merging of two arrays
}
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    merge_sort(A,n,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
