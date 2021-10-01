#ifndef LOSHU_H
#define LOSHU_H

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <stdbool.h>

bool foundSquare;
int loShuSquare[3][3];
int iterations;

int number();

//row and col sums
int rowSum1;
int rowSum2;
int rowSum3;

int colSum1;
int colSum2;
int colSum3;

int diagSum;

void createNewSquare();
void printSquare();
bool evaluateSquare();

#endif