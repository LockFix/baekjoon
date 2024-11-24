#include <stdio.h>
#include <string.h>
int main() {
    char msg[5];
    scanf("%s", msg);

    while ((strcmp(msg, "TTYL")) != 0) {
        if ((strcmp(msg, "CU")) == 0)
            printf("see you\n");
        else if ((strcmp(msg, ":-)")) == 0)
            printf("I’m happy\n");
        else if ((strcmp(msg, ":-(")) == 0)
            printf("I’m unhappy\n");
        else if ((strcmp(msg, ";-)")) == 0)
            printf("wink\n");
        else if ((strcmp(msg, ":-P")) == 0)
            printf("stick out my tongue\n");
        else if ((strcmp(msg, "(~.~)")) == 0)
            printf("sleepy\n");
        else if ((strcmp(msg, "TA")) == 0)
            printf("totally awesome\n");
        else if ((strcmp(msg, "CCC")) == 0)
            printf("Canadian Computing Competition\n");
        else if ((strcmp(msg, "CUZ")) == 0)
            printf("because\n");
        else if ((strcmp(msg, "TY")) == 0)
            printf("thank-you\n");
        else if ((strcmp(msg, "YW")) == 0)
            printf("you’re welcome\n");
        else
            printf("%s\n", msg);
        scanf("%s", msg);
    }
    printf("talk to you later");

    return 0;
}