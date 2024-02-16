#include<stdio.h>
int N=10;
int abs(int x){
    if (x>0) {
        return x;
    }
    return -x;
}
int max(int a,int b){
    if (a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if (a<b){
        return a;
    }
    return b;
}
int check(int i,int j){

    //line equations(all right angle triange pattern)
    // if(i-j<0)
    //     return 0;
    
    // if(i-j>=0)
    //     return 0;
    
    // if(i+j<10)
    //     return 0;
    
    // if(i+j>=10)
    //     return 0;
    
    // chess Board patterns
    // if((i+j)%2>0)
    //     return 0;

    // fat chess board
    // if((j%4<2) && (i%2==0))
    //     return 0;
    // else if ((j%4>=2) && (i%2!=0))
    //     return 0;
    
    // if(i-j<0)
    //     return 0;
    // else if(i+j<10)
    //     return 0;

    // Pascal's Triangle 
    // if(i-j<0) 
    //     return 0;
    // else if(i+j<10)
    //     return 0;
    // else if((i+j)%2==0)
    //     return 0;

    // if((i-5)*(i-5)+(j-5)*(j-5)>4*4) //circle equation
        // return 0;
    // return 1;
    // if(i==j){
    //     // if(i%2==0)
    //         return 1;
    //     // else
    //     //     return 0;
    // }
    // int x=abs(i-N/2);
    // int y=abs(j-N/2);
    // if(i>j){
    //     if (max(x,y)%2==0){
    //         return 1;
    //     }

    // }
    // else{
    //     if (max(x,y)%2!=0){
    //         return 1;
    //     }

    // }
    // if((i<j)^(i+j>=N)){
    // if((i<j)^(i+j>=N)){
    // if(N-i<=j || i>j){
        // return 1;
    // }
    return 0;
    // return 1;
}
int main(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(check(i,j)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}