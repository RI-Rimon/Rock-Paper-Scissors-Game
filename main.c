#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player, computer=rand()%3;
    printf("Enter your choice (0: Rock, 1: Paper, 2: Scissors): ");
    scanf("%d", &player);
    printf("Computer chose: %d\n", computer);

    if(player < 0 || player > 2){
        printf("Invalid choice! Please choose 0, 1, or 2.\n");
        return 1;
    }
    if(player == computer){
        printf("It's a tie!\n");
    } else if((player == 0 && computer == 2) || 
              (player == 1 && computer == 0) || 
              (player == 2 && computer == 1)){
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    return 0;


}