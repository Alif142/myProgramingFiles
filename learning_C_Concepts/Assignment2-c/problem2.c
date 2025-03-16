#include <stdio.h>
void delete(int arr[],int k,int size){
  for (int i=k;i<size;i++) {
        arr[k] = arr[k+1]; 
        k++;
    }
}


int main(){
    int arr[100];
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    printf("\nEnter array elements:");
    for (int i=0;i<size;i++) {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]); 
        printf("\n");
    }
    printf("\nOld array\n");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]); 
    }
    int k;

    printf("\nEnter index:");
    scanf("%d",&k);
    delete(arr,k,size) ;
    size--;
    printf("\nNew array\n");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]); 
    }

}
