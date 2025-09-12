#include <stdio.h>
#include <string.h>

int main(void) {

    //  MAD   LIBS    GAME

    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    char noun[50] = "";
    char verb[50] = "";

    printf("Enter an adjective (description): ", adjective1);
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter an adjective (descripttion): ", adjective2);
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter an adjective (descripttion): ", adjective3);
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Enter a noun (animal or person): ", noun);
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb (action): ", verb);
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("\nI came back home very %s,\n", adjective1);
    printf("And the house was so %s,\n", adjective2);
    printf("While in the house I saw a %s watch,\n", adjective3);
    printf("On my %s hand,\n", noun);
    printf("And i was so %s.", verb);

    return 0;
}