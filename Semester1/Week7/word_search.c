#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ara[50] = "This is a string", src[20] = "string";
    int wordLen = strlen(src);

    int i, j, flag = 0;

    for(i = 0; ara[i] != '\0'; i++)
    {
        if(ara[i] == src[0])
        {
            for(j = 0; j < wordLen; j ++)
            {
                if(ara[i + j] == src[j])
                {
                    flag = 1;
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag) printf("found");
    else printf("not found");

}