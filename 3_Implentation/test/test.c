#include "unity.h"
#include <prototypes.h>

#define PROJECT_NAME    "512_game"

/* Prototypes for all the test functions */
void starting();
void wait();
void waitL();
void Display();
void print_ever();
int Action(int);
void Random_creator();
void Starting_Random();
int Temp_counter();
void ending();
void record();
void Down();
void Up();
void Left();
void Right();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(strarting);
  RUN_TEST(Dsiplay);
  RUN_TEST(Up);
  RUN_TEST(wait);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void starting(void) {
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
    while(!kbhit());

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
    while(!kbhit());
}

void Display(void) { 
    int i,j;
    system("cls");
    print_ever();
    for(i=0;i<SIZE;i++)
    {
        printf("\t\t\t %c",BORDER);
        for(j=0;j<SIZE;j++)
        {
            if(Matrix[i][j]==0)
            {
                printf("      ");
            }
            else
                printf(" %4d ",Matrix[i][j]);
        }
        printf("%c\n\t\t\t %c                        %c\n",BORDER,BORDER,BORDER);
    }
    printf("\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER);
}

void Up(void) {
    int i,j;
    for(j=0;j<SIZE;j++)
    {
        i=1;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(i==SIZE)
                    break;
                i++;
            }
            if(i==SIZE)
                break;
            while(i>0 && (Matrix[i-1][j]==0 || Matrix[i][j]==Matrix[i-1][j]))
            {
                Matrix[i-1][j]+=Matrix[i][j];
                Matrix[i][j]=0;
                i--;
            }
            i++;
        }
    }
}

void wait(void) {
    int i;
    for(i=0;i<4500000;i++);
  
}
