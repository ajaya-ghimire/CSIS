#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{
    char question[1024];
    char *answers[] =
    {
        "Yes, of course!",
        "Without a doubt, yes.",
        "You can count on it.",
        "For sure!",
        "Ask me later",
        "I'm not sure.",
        "I can't tell you right now.",
        "I'll tell you after my nap.",
        "No way!",
        "I don't think so.",
        "Without a doubt, no.",
        "The answer is clearly NO."
    };

    do
    {
        printf("**********Ask Magic 8-ball**********");
        printf("[Enter quit to exit]");
        printf("Question: ");

        fgets(question, 1024, stdin);

        if(strcmp (question, "quit\n")==0)
        break;


        int length = strlen(question);
        int total = 0;
        for(int i = 0; i < length; i++)
        total += question[i];

        int answer = total % 20;

        printf("\nMagic 8-Balls says: %s\n\n\n", answers[answer]);

    }
    while (true);

    return 0;

}
