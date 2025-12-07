#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++) printf("*");
        printf("\n");
    }
    //Walls 
    for(i=1;i<6;i++){
        for(j=1;j<=7;j++){
            if(j==1 || j==7){
                printf("|");
            }
            else printf(" ");

        }
        printf("\n");
    }
    for(int i=0;i<7;i++){
        printf("-");
    }


    
    return 0;
}