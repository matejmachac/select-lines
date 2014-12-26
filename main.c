#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[100];

    while(fgets(line,100,stdin)!=0)
    {
        if((strlen(line)-1)%2!=0)
        {
            printf("%s",line);
        }
    }

    return 0;
}
