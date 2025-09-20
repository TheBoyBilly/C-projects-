#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

   //QUIZ GAME

    char Questions[][200] = {"What's the largest planet in our solar system?",
                             "What's the hottest planet in our solar system?",
                             "What year is it currently?",
                             "Is the earth flat?"};

    char Options[][200] = {" A. Jupiter\n B. Saturn\n C. Uranus\n D. Neptune",
                           " A. Mercury\n B. Venus\n C. Earth\n D. Mars",
                           " A. 2018\n B. 2034\n C. 1906\n D. 2025",
                           " A. Yes\n B. Yes\n C. No\n D. Yes"}; 
    
    char AnswerValue[] = {'A', 'B', 'D', 'C'};          
    
    int QuestionCount = sizeof(Questions)/sizeof(Questions[0]);

    char guess = '\0';
    int score = 0;



    printf("***QUIZ GAME***\n");

    for (int i = 0; i < QuestionCount; i++)
    {
         printf("\n%s", Questions[i]);
         printf("\n%s\n", Options[i]);
         printf("\nEnter your answer: ");
         scanf(" %c", &guess);

         guess = toupper(guess);

         if (guess == AnswerValue[i])
    {
        printf("CORRECT!\n");
        score++;
    }
    else
    {
        printf("WRONG!\n");
    }

    }

     printf("Your score is %d out of %d points", score, QuestionCount);
    
    return 0;
}