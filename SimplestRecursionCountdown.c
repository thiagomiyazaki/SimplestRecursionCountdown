#include <stdio.h>

void countdown(int n){
    // Stop condition
    if(n > 0){
        printf("%d\n", n);
        countdown(n-1);     // recursive call
    }
}

int main(){
    int inputNumber = 0;
    printf("Enter number for countdown: ");
    scanf("%d", &inputNumber);

    countdown(inputNumber);

    return 0;
}