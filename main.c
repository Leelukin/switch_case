#include <stdio.h>

int  main (){
    int a,b;
    printf("enter a and b ");
    scanf("%d %d", &a, &b);

    int oper;
    
    printf("enter operation 1) +  2) - 3) * 4) / ");
    scanf("%d", &oper);

    printf("\n"); 

    switch (oper){
        case 1:
            oper= a+b;
    
            printf ("%d\n", oper); break;
        case 2:
            oper=a - b;
            printf ("%d\n", oper); break;
        case 3:
            oper=a*b ;
            printf ("%d\n", oper); break;
        case 4:
            oper=a/b;
            printf ("%d\n", oper); break;
        default:
            printf("error");



    }


 printf("\n");



}