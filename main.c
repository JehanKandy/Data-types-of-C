#include<stdio.h>

extern int a,b;
extern int c;
extern float f;
char str[100];

int main (){
    int a,b;
    int c;
    float f;

    a =10;



    printf("Enter a value :");
    str =gets(str );




    b =20;
    c =a +b;
    printf("value of c : %d \n",c);
    f =70.0/3.0;
    printf("value of f : %f \n",f);
    return 0;
}
