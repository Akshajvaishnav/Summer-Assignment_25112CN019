#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n\n");

    printf("1. Capital of India?\n");
    printf("1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1) Dennis Ritchie  2) James Gosling  3) Bjarne Stroustrup  4) Guido van Rossum\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n3. 2 + 3 = ?\n");
    printf("1) 4  2) 5  3) 6  4) 7\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nFinal Score = %d/3\n", score);

    return 0;
}
