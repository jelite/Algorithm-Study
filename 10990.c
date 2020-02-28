#include <stdio.h>

int main()
{
    int a, r_empty, l_empty;
    scanf("%d", &a);

    for(int i=0;i< a;i++){
        l_empty = a - 1 - i;
        r_empty = (a - l_empty -1)*2 - 1;
        
        for(int j =0;j<l_empty;j++){
            printf(" ");
        }
        printf("*");
        
        if(i>0){
            for(int j =0;j<r_empty;j++){
                printf(" ");
            }
            printf("*");
        }
        
        printf("\n");
    }

}
