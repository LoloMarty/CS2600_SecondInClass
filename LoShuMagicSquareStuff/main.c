#include "loShu.h"
int number()
{
    return rand()%15;
}

void createNewSquare()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            loShuSquare[i][j] = number();
        }
    }
}

void printSquare()
{
    for(int i=0; i<3; i++)
    {
        printf("%s","[");
        for(int j=0; j<3; j++)
        {
            printf("%2i ",loShuSquare[i][j]);
        }
         printf("%s","]\n");
    }
    //printf("Row Sum: [1] %i  [2] %i  [3] %i", rowSum1, rowSum2, rowSum3);
    //printf("\nCol Sum: [1] %i  [2] %i  [3] %i\n", colSum1, colSum2, colSum3);
}

bool evaluateSquare(int loShuSquare[3][3])
{
    rowSum1 = 0;
    rowSum2 = 0;
    rowSum3 = 0;

    colSum1 = 0;
    colSum2 = 0;
    colSum3 = 0;

    diagSum = 0;

    for (int i=0; i<3; i++)
    {
        rowSum1 += loShuSquare[0][i];
        rowSum2 += loShuSquare[1][i];
        rowSum3 += loShuSquare[2][i];

        colSum1 += loShuSquare[i][0];
        colSum2 += loShuSquare[i][1];
        colSum3 += loShuSquare[i][2];
    }

    diagSum = loShuSquare[0][0] + loShuSquare[1][1] + loShuSquare[2][2];

    if (rowSum1 == 15 && rowSum2 == 15 && rowSum3 == 15 && colSum1 == 15 && colSum2 == 15 && colSum3 == 15)
    {
        return true;
    }else{
        //printf("Mod Result: %i\n", (rowSum1+rowSum2+rowSum3+colSum1+colSum2+colSum3+diagSum)%15);
        return false;
    }
}

void main()
{
    srand(time(0));

    while (true)
    {
        createNewSquare();
        
        evaluateSquare(loShuSquare);

        printSquare();
        printf("Total # of Generated Squares Before Success: %i", iterations);
        printf("%s","\n");

        iterations++;
        
        //sleep(1);
    }

    

    return 0;
}