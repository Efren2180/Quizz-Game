int main() {
  char questions[][100] = {
      "1-Who was the person that introduced the C programming language?\n",
      "2- In what year C became a programming language?: \n",
  
      "3- C Was created to be used in?:\n"};

  char options[][100] = {"A. Denis Ritchie ",
                         "B. Bill gates",
                         "C. Elon Musk",
                         "D. Freddie Mercury",
                         "A. 1969",
                         "B. 1972",
                         "C. 1975",
                         "D. 300 B.C",
                         "A. Writing operating Systems for minicomputers",
                         "B. High end computers",
                         "C. Low end Computers",
                         "D. All kind of Computers"};

  char Answers[3] = {'A', 'B', 'A'};
  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score;

  printf("QUIZ GAME!\n");

  for (int i = 0; i < numberOfQuestions; i++) {
    printf("\n********************\n");
    printf("%s\n", questions[i]);
    for (int j = (i * 4); j < (i * 4) + 4; j++){

      printf("%s\n", options[j]);

    }
    printf("guess: ");
    scanf("%c", &guess);
    scanf("%c");

    guess = toupper(guess);

    if(guess == Answers[i]){
      printf("CORRECT!\n");
      score++;
    }
    else{
      printf("WRONG!\n");
    }
    printf("********************\n");
    printf("final score:%d/%d\n", score, numberOfQuestions);
    printf("********************\n");

  }
  return 0;
}
