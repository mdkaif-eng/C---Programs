#include <stdio.h>
int main(){
    int i = 'a';
    do{
        printf("%c\n" , i);
        i++;

    }
    while(i<='z');
    return 0;
}