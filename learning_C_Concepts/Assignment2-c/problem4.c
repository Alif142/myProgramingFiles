#include <stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int size=0;
    for (int i=0;i<=n;i++) {
        printf("arr[%d]:",i) ;
        scanf("%d",&arr[i]);
        size++;
    }
    printf("\nOld array\n");
    for (int i=0;i<=n;i++) {
        printf("%d ",arr[i]);
    }
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    arr[size] = value;
    printf("\nNew array\n");
    for (int i=0;i<=size;i++) {
        printf("%d ",arr[i]) ;
    }
}
