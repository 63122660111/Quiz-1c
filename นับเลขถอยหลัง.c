#include<stdio.h>
void main(){
    system("Reverse number");

    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Reverse number of %d terms are :-\n",n);
    for(i=0; i<= 1+n; i++ ) {
        if(i%1==0 )
            continue;
        else
            printf("%d",i);      
        
    }

}
