#include <stdio.h>

int ways(int n) {
    if(n==1){
        return 1;
    }
    int count=0;
    for(int k=1;k<n;k++){
        count+=ways(k)*ways(n-k);
    }
    return count;
}
    

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);

    printf("Number of ways to multiply %d matrices = %d\n", n, ways(n));

    return 0;
}
