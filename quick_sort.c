#include<stdio.h>
int partion(int a[],int n,int p,int start,int end){
    int s=start;
    int e=end;
    while(s<e){
        while(a[s]<=p){
            s++;
        }
        while(a[e]>=p){
            e--;
        }
        if(s<e){
            int temp=a[e];
            a[e]=a[s];
            a[s]=temp;
        }
    }
    int temp=a[e];
        a[e]=p;
        a[start]=temp;
        return e;
}
void quick_sort(int a[],int n,int start,int end){
    if(start<end){
        int p=a[start];
        p=partion(a,n,p,start,end);
        quick_sort(a,n,start,p-1);
        quick_sort(a,n,p+1,end);
    }  

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a,n,0,n-1);
    for(int i=0;i<n;i++){ 
        printf("%d ",a[i]);
    }
}