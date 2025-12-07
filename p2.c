#include<stdio.h>

int main(){
    float income,tax;
    printf("Enter the total income of ur family:\n");
    scanf("%f",&income);
    if(income<=300000){
        tax=0;
        printf("Tax payable is %f\n",tax);
    }
    else if(income>=300001 && income<=700000){
        tax=(5*income)/100;
        printf("Tax payable is %f\n",tax);

    }
    else if(income>=700001 && income<=1000000){
        tax=(10*income)/100;
        
        printf("Tax payable is %f\n",tax);


    }
    else if(income>=1000001 && income<=1200000){
        tax=(15*income)/100;
        
        printf("Tax payable is %f\n",tax);

    }
    else if(income>=1200001 && income<1500001){
        tax=(20*income)/100;
        
        printf("Tax payable is %f\n",tax);
        
    }
    else{
        tax=(30*income)/100;
        
        printf("Tax payable is %f\n",tax);
        
    }
    return 0;
}