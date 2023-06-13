#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1;
}

void diceGame() {
    int die1, die2, total;
    
    printf("Rolling dice...\n");
    die1 = rollDice();
    die2 = rollDice();
    total = die1 + die2;
    
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);
    
    if (total > 7) {
        printf("You won!\n");
    } else {
        printf("You lost.\n");
    }
}

void greetUser() {
    char name[100];
    
    printf("What is your name?\n> ");
    scanf("%s", name);
    
    printf("Hello, %s!\n", name);
}

int main() {
    srand(time(0));
    
    greetUser();
    diceGame();
    
    return 0;
}
