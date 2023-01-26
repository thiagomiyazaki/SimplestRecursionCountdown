#include <stdio.h>

void countUp(int n){
    if(n > 0){
        countUp(n-1);
        printf("%d\n", n);
    }
}

int main(){
    int inputNumber = 0;
    printf("Enter number for counting upwards: ");
    scanf("%d", &inputNumber);

    countUp(inputNumber);

    return 0;

    return 0;
}