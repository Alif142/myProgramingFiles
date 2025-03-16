#include <stdio.h>
int checkPalindrom(int n){
    int temp = n , rem = 0 , rev = 0;
    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == n) {
        return 1; 
    }
    else
    return 0;
}

int fact(int n){
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int note500 = 0 , note100 = 0 , note50 = 0, note20 = 0 , note10 = 0,note5 = 0,note2 = 0,note1 = 0;
    int ammount = 1175;
    while (ammount > 0) {

        if (ammount >= 500) {
            ammount-=500;
            note500++;
        } 

        else if (ammount >= 100) {
            ammount-=100;
            note100++;
        } 

        else if (ammount >= 50) {
            ammount-=50;
            note50++;
        } 

        else if (ammount >= 20) {
            ammount-=20;
            note20++;
        } 

        else if (ammount >= 10) {
            ammount-=10;
            note10++;
        } 

        else if (ammount >= 5) {
            ammount-=5;
            note5++;
        } 

        else if (ammount >= 2) {
            ammount-=2;
            note2++;
        } 

        else if (ammount >= 1) {
            ammount-=1;
            note1++;
        }


    }


    printf("500:%d\n",note500);
    printf("100:%d\n",note100);
    printf("50:%d\n",note50);
    printf("20:%d\n",note20);
    printf("10:%d\n",note10);
    printf("5:%d\n",note5);
    printf("2:%d\n",note2);
    printf("1:%d",note1);
}
