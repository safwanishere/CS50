#include <cs50.h>
#include <stdio.h>

int main(void){
    int cash;
    do{
         cash = get_int("Change owed: ");
    }
    while ( cash<=0 );

    int coins = 0;
    while(cash>0){
        if (cash >= 25){
            cash -= 25;
            coins += 1;
        }
        else if (cash >= 10){
            cash -= 10;
            coins += 1;
        }
        else if (cash >= 5){
            cash -= 5;
            coins += 1;
        }
        else if (cash >= 1){
            cash -= 1;
            coins += 1;
        }
    }

    printf("%i\n", coins);
}
