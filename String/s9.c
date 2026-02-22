#include <stdio.h>
#include <string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main(){
    char firstStr[] = "bbbb";
    char secStr[] = "bbbb";

 printf("%d" , strcmp(secStr,firstStr));

}

int countLength(char arr[]){
    int count = 0;
    for(int i=0 ; arr[i] !='\0'; i++){
        count++;
    }
    return count-1;
}
void printStr(char arr[]){
for(int i=0; arr[i] ='\0'; i++){
    printf("%c",arr[i]);
}
printf("\n");
}