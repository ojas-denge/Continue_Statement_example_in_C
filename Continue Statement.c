//Continue Statement
#include<stdio.h>
int main () {
    int n, i;
    
    printf("Input a number between 1 to 10 : \n");
    scanf("%d", &n);
    
    for (i=1; i<=10; ++i) {
        if (i==n) {
            continue;
        }
        printf("%d \n",i);
        }
    return 0;
}