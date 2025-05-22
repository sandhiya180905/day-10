#include<stdio.h>
int main(){
    int c=7;
    int *p=&c;
    p=&c;
    printf("%d%d",p,&c);
}