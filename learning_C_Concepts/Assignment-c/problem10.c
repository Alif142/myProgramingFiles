#include <stdio.h>
int main(){
    int a = 8 , b = 2 , c = 4 , d= 5,e = 2 ;
    float sum = 1;
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        sum += ((float)a*a) +(float) b /(float) (c*e);
        a = b*c;
        b++;
        c +=d;
        d+=2;
        e++;
    }
    printf("%f", sum);
}
