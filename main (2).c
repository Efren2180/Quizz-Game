#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "1-Who was the person that introduced the C programming language?\n",
        "2-In what year C became a programming language?: \n",
        "3-C was created to be used in?:\n"
    };

    char options[][100] = {
        "A. Denis Ritchie ",
        "B. Bill Gates",
        "C. Elon Musk",
        "D. Freddie Mercury",
        "A. 1969",
        "B. 1972",
        "C. 1975",
        "D. 300 B.C.",
        "A. Writing operating systems for minicomputers",
        "B. High-end computers",
        "C. Low-end computers",
        "D. All kinds of computers"
    };

    char Answers[3] = {'A', 'B', 'A'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    printf("QUIZ GAME!\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("\n********************\n");
        printf("%s", questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        
        printf("guess: ");
        
        scanf(" %c", &guess); 

        
        guess = toupper(guess);

       
        if (guess == Answers[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }

        printf("********************\n");
    }

    
    printf("Final score: %d/%d\n", score, numberOfQuestions);
    printf("********************\n");

    return 0;
}
