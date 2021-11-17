#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 80567;

    do{
        n++;
        if(n%8==0){
            printf("0 ");
            if(n%2!=0){
                printf(", jest nieparzysta \n");
            }else{
                printf("\n");
            }
        }else{
            if(n%2!=0){
                printf("%d , jest nieparzysta \n" , n);
            }else{
                printf("%d\n" , n);
            }
        }
        }while(n<80579);

    return 0;
}
