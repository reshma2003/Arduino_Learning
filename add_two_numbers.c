#include<stdio.h>

int  add(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int main(){
    int x,y,result;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    result = add(x,y);
    printf("%d", result);
    return 0;
}
