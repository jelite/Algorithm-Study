/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int func(int a){
    return a%10*10 + (a/10+a%10)%10;
}
int main()
{
    int a, b, count=1;
    scanf("%d",&a);
    if(a<10) a*=10;
    if(a==0){
        printf("0\n");
        return 0;
    }
    b = func(a);
    do{
        count++;
        b = func(b);
    }while(func(b) != a);
    printf("%d\n", count+1);   
    return 0;
}
