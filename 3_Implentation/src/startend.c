#include "prototypes.h"


/** \brief starting()
 * what to be executed at start application
 * \return void
 */
void starting()
{
    int i;
    char sentence1[]="WELCOME NERD";
    char sentence2[]="Press any key to continue";
    char sentence3[]="sliding block puzzle game";

    char sentence4[]="WELCOME TO 512 GAME IN 'C'";



    waitL();
    printf("\n\n\n\n\n\n\n\t\t\t\t");
    printer(sentence1);
    waitL();
    waitL();
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
    printer(sentence2);
    
    printf("\n\n\n\n\t\t\t\t\t");
    printer(sentence4);
    waitL();
    printf("\n\n\n\n\t\t\t\t\t");
    waitL();
    printer(sentence3);
    waitL();
    waitL();
    system("cls");

    printf("\n\n\t\t\t\t\t");
    for(i=0;i<10;i++)
    {
        waitL();
    }
    system("cls");
    printf("\n\n\n\t\t\tINSTRUCTION\n\n\n");
    printf(" ->  Enter arrow key to move\n\n");
    printf(" ->  For wining this game any one box have value 2048\n\n");
    printf(" -> You have maximum 512 try to win the game\n\n\n\n");
    printf("\t\t\t\t\t\tPRESS ANY KEY TO PLAY\n");
}

/**< random integers */
void Starting_Random()
{
    Matrix[3][1]=8;
    Matrix[3][2]=32;
    Matrix[3][3]=16;
    Matrix[2][2]=8;
    Matrix[2][3]=8;
    Matrix[1][2]=8;

    Display();
}
