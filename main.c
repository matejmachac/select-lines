#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char line[100];

    puts("Assignment 3.4");
    puts("Name: SelectLines");
    puts("Description: Prints all lines with odd length from the standard input. All other lines are ignored.");
    puts("**********************");

    while(fgets(line,100,stdin)!=0)
    {
        if((strlen(line)-1)%2!=0)
        {
            printf("%s",line);
        }
    }

    return 0;
}

