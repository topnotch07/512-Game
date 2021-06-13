
/**
 * @file prototypes.h
 * @author thiruvikraman
 * @brief This program contains header files and macros to run 512 game
 * @date 04-15-2021
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __PROTOTYPES_H__
#define __PROTOTYPES_H__
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<time.h>
#include<ctype.h>
#include <time.h>

/** @brief declare macros For KEYSTROKES
 * UP,DOWN, LEFT,RIGHT, SIZE, BORDER, ESC, PR
 */

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SIZE 4
#define BORDER 219
#define ESC 57
#define PR 2

/**< initializing Matrix to perform 512 game in form square  */
int  Matrix[100][100];




void starting();
void wait();
void waitL();
void Display();
void printer();
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

#endif;
