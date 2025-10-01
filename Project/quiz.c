//
//  main.c
//  Project
//
//  Created by Muhammad Haroon on 9/29/25.
//

#include <stdio.h>


char is_user_ready(void);
int question_1(void);
int question_2(void);
int question_3(void);
int question_4(void);
int question_5(void);
int question_6(void);
int question_7(void);
int question_8(void);
int question_9(void);
int question_10(void);
void clear_keyboard_buffer(void);
int play_again(void);

int main(int argc, char * argv[])
{
    
    
    
    do {
        int score = 0;
        printf("Are you ready to play? (y/n):");
        char c = is_user_ready();
        if (c == 'y' || c == 'Y')
        {
            
            score += question_1(); // add 1 if correct or 0 if incorrect
            
            score += question_2();
            
            score += question_3();
            
            score += question_4();
            
            score += question_5();
            printf("Your final is score: %d/5!\n", score);
            printf("Your percentage: %d%c!\n", 20*score, '%');
            
            
        }
        else
        {
            
            printf("Aww ok, cya later\n");
        }
        
        int final_percentage = 20*score;
        
        if (final_percentage > 60)
        {
            printf("Good Job, You're pretty smart!\n");
        }
        else
        {
            printf("You gotta get smarter!\n");
        }
    }
    while (play_again());


    
    return 0;
}

char is_user_ready(void)
{
    char c;
    scanf(" %c", &c);
    clear_keyboard_buffer();
    return c;
}

int question_1(void)
{
    char answer;
    printf("What is the first month?\n");
    printf("A: February\n");
    printf("B: November\n");
    printf("C: January\n");
    printf("D: December\n");
    printf("Answer:");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("That's Correct!\n");
        return 1;
    }
    else
    {
        printf("Wrong!\n");
        return 0;
    }
}

int question_2(void)
{
    char answer2;
    printf("When is the USA's independence day?\n");
    printf("A: February 1st\n");
    printf("B: December 26nd\n");
    printf("C: January 1st\n");
    printf("D: July 4th\n");
    printf("Answer:");
    scanf(" %c", &answer2);
    if (answer2 == 'D' || answer2 == 'd')
    {
        printf("That's Correct!\n");
        return 1;
    }
    else
    {
        printf("Wrong!\n");
        return 0;
    }
}

int question_3(void)
{
    char answer;
    printf("What is the fastest growing religion?\n");
    printf("A: Islam\n");
    printf("B: Judaism\n");
    printf("C: Christianity\n");
    printf("D: Hinduism\n");
    printf("Answer:");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a')
    {
        printf("That's Correct!\n");
        return 1;
    }
    else
    {
        printf("Wrong!\n");
        return 0;
    }
}

int question_4(void)
{
    char answer;
    printf("How many planets are in our solar system\n");
    printf("A: 9\n");
    printf("B: 6\n");
    printf("C: 8\n");
    printf("D: 5\n");
    printf("Answer:");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("That's Correct!\n");
        return 1;
    }
    else
    {
        printf("Wrong!\n");
        return 0;
    }
}

int question_5(void)
{
    char answer;
    printf("Which year was youtube created?\n");
    printf("A: 2000\n");
    printf("B: 2005\n");
    printf("C: 2010\n");
    printf("D: 1875\n");
    printf("Answer:");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("That's Correct!\n");
        return 1;
    }
    else
    {
        printf("Wrong!\n");
        return 0;
    }
}



void clear_keyboard_buffer(void)
{
    char o;
    scanf("%c", &o);
    while (o != '\n')
    {
        scanf("%c", &o);
    }
}

int play_again(void)
{
    
    printf("Do you want to play again?");
    char c = is_user_ready();
    
    if (c == 'y' || c == 'Y') {
        
        return 1; // true
    }
    else
        printf("Aww ok, cya later\n");
    
    return 0; // false
}
