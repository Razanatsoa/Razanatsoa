#include <stdio.h>

int main() {
    int number;
    printf("A three-digit number is given. Is it true that all his numbers are the same?\n");

    printf("give the number > 99 and <1000\n");

    scanf("%d", &number);
    if (number > 99 && number < 1000);
    {
        int number1 = number / 100;

        int number2 = number % 100;
        number2 = number2 / 10;

        int number3 = number % 10;

        if(number1 == number2 && number1 == number3 && number2 == number3){
            printf(" three numbers are the same \n");
        } else{
            printf(" three numbers are different \n");
        }
    }

}