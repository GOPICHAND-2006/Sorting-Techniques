//SELECTION SORT ==> Time complexity=O(n^2)==>(Worst case)
//                   Space Complexity=O(1) 
/*============================================================================================================*/
#include<stdio.h>
void selection_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int min=a[i],min_index;
        //finding the minimum element in the array
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                min_index=j;
            }
        }
        if(a[i]>min){//condition for swaping
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);//calling function
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
