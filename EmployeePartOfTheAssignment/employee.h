#include <stdio.h>
#include <stddef.h>

typedef struct
{
    long number;
    char *name;
    char *phone;
    double salary;
} Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee; //defines a pointer value of type "Employee" which cannot be changed (because of the const prefix)