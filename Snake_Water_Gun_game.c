#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp){
    
    // If both chose same
    if (you==comp){
        return 0;
    }
    // If both chose different (you , Comp)
    // snake, water and water, snake
    // snake, gun and gun, snake
    // gun, water and water, gun

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='g' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }

    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
}

int main(){

    char you, comp;
    srand(time(0));
    int number = rand()%100 +1;

    // printf("%d\n",number);  //To check random no. generation
 
    if(number<33){
        comp='w';
    }
    else if(number<33 && number>66){
        comp='s';
    }
    else{ 
        comp='g';
    }

    //Taking input from user
    printf("Enter 'w' for water 'g' for gun and 's' for snake\n");
    scanf("%c",&you);

    int result = snakeWaterGun(you,comp);
    if(result==0){
        printf("Game draw\n");
    }
    else if(result==1){
        printf("You Win..!!\n");
    }
    else{
        printf("You Lose..!!\n");
    }
    return 0;
}