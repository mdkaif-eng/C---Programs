#include <stdio.h>
int main(){

int age;
printf("enter age");
scanf("%d", & age);

if(age>18){
    printf("they are adult\n");
    printf("they can drive\n");
    printf("they can vote\n");
}
else{
    printf("they aren't adult\n");
    printf("they cann't drive\n");
    printf("they cann't vote\n");
}
printf("thank you");
return 0;
}
