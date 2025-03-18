#include <stdio.h>
int main(){
   int arr[100];
    int size;
    printf("Enter size:");
    scanf("%d",&size);

    printf("Enter elements for array\n");

    for (int i=0;i<size;i++) {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("Enter position:");
    scanf("%d",&pos);

    printf("\nForm index %d position,array elements are\n",pos);
    for (int i = pos;i<size;i++ ) {
        printf("%d ",arr[i]) ;
    }

    printf("\nArray elements prior to index\n");
    for (int i = 0;i<pos;i++ ) {
        printf("%d ",arr[i]) ;
    }

}
