#include <stdio.h>

int main()
{
    int a, empty, star, p;
    scanf("%d", &a);
    
    p = 1;
    empty = a;
    star = a - empty;
    
    for(int i=0;i< a*2-1;i++){
        if(i == a) p *= -1;
        
        empty -= p;
        star += p;
        
        for(int j=0;j<empty;j++){
            printf(" ");
        }
        for(int j=0;j<star;j++){
            printf("*");
        }
        printf("\n");
    }

}
