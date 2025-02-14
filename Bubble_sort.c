/*================================================================================================================================================================================*/
//                                       NOTES
//BUBBLE SORT==> Time complexity=O(n^2)==>(Worst case)
//               Space Complexity=O(1) 
/*=================================================================================================================================================================================*/
#include<stdio.h>
int bubble_sort(int a[],int n){
	int i,j;
	//swaping the elements
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(a[j-1]>a[j]){ //checking the condition for swaping
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);//calling_function
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}



// using recursion
#include<stdio.h>
void Bubblesort(int a[], int n,int i,int j){
    if(i>=n){
        return;
    }
    if(j>=n){
        return;
    }
    if(a[j] >a[j+1] && j< n-1){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    Bubblesort(a,n,i,j+1);
    Bubblesort(a,n,i+1,0);   
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=1;
    Bubblesort(a,n,i,j);//calling_function
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}