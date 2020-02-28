#include <stdio.h>
void even(int a){
    printf(" ");
    for(int i=0;i < a/2;i++){
        printf("* ");
    }
    printf("\n");
}
void odd(int a){
    for(int i=0;i < (a+1)/2;i++){
        printf("* ");
    }
    printf("\n");
}
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0;i<a*2;i++){
        if(i%2 != 0) even(a);
        else odd(a);
    }
    

}
