#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        if(i%2 != 0)printf(" ");
        for(int j=0;j<a;j++){
            printf("* ");
        }
        printf("\n");
        
    }
    

}
