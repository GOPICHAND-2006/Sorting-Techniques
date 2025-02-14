//                           NOTES
// First Codition(true codition)
// 0 1 2 3 4 -- index
// 4 5 3 2 1 --array
//   i j 
//temp=3;5>3(condition true)==> into the loop
//a[2]=a[1]==> 3=5 ==> array--> 4 5 5 2 1 (i=0) out of the loop
//a[1]=3 ==> 5=3 ==> array --> 4 3 5 2 1.......

// False Codition
// 0 1 2 3 4 -- index
// 4 5 3 2 1 --array
// i j ==> i is sorted, j is unsorted
//  sort 5=temp,(4>5)codition fail==>out of the loop
// a[1]=5 ==> array is unchanged...
/*===========================================================================================*/
#include<stdio.h>
void insertion_sort(int a[],int n){
    for(int j=1;j<n;j++){
        int i=j-1;
        int temp=a[j];
        while(i>=0 && a[i]>temp){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}