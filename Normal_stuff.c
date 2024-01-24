#include<stdio.h>
int main(){
    int i=-1;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    }
    printf("++%d\n",i);
    while(i--){
        printf("%03d\n",i);
    }
    do{
        printf("%02d\n",i);
        i++;
    } while(i<10);
}