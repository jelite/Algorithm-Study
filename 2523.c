#include <stdio.h>

int main()
{
    int a, star, p;
    scanf("%d", &a);
    
    p = 1;
    star = 0;
    
    for(int i=0;i< a*2-1;i++){
        if(i == a) p *= -1;
        star += p;
        for(int j=0;j<star;j++){
            printf("*");
        }
        printf("\n");
    }

}
