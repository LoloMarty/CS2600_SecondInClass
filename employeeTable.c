#include "employee.h"
#include "string.h"
#include "stdlib.h"

Employee EmployeeTable[] = 
{
    {1001l, "Daphne Borromeo", "909-555-2134", 8.78},   //note that there is an l at the end to convert those int literals into long values 
    {1001l, "Tammy Franklin", "123-555-1212", 4.50},
    {1140l, "Dorris Perl", "310-555-1215", 7.80},
    {4011l, "Tony Bobcat", "909-555-1235", 6.34},
    {50451, "Brian Height", "714-555-2749", 8.32}
};

const int EmployeeTableEntries = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);

void main()
{
    printf("%d]n",sizeof(EmployeeTable));
    printf("%d]n",sizeof(EmployeeTable[0]));
    printf("%d]n",sizeof(long));
    printf("%d]n",sizeof(char*));
    printf("%d]n",sizeof(char*));
    printf("%d]n",sizeof(double));
}