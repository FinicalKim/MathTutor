#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 
#include <stdlib.h> 



int main() {

    int answer;

    srand(time(NULL));

    int randomnumber1;
    randomnumber1 = rand() % 501;
    printf("%d\n", randomnumber1);

    int randomnumber2;
    randomnumber2 = rand() % 501;
    printf("%d\n", randomnumber2);
    
    int sum = (randomnumber1 + randomnumber2);

    printf("What is the sum of the two integers given, please enter your answer : \n");
    scanf("%d", &answer);

    if (answer == sum) {
        printf("Congratulations, that is correct.");
    }
    else {
        printf("That is not correct, the correct answer is %d", sum);
    }
    return 0;

}