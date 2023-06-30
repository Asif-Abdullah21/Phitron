#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001], temp[1001];
    scanf("%s", &str);

    strcpy(temp, str);

    int i = 0, j = strlen(temp) - 1;
    while (i < j)
    {
        char t = temp[i];
        temp[i] = temp[j];
        temp[j] = t;
        i++;
        j--;
    }

    int value = strcmp(str, temp);

    if (value == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
/*

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],temp[1001];
    gets(str);

    strcpy(temp,str);

    strrev(str);

    int value = strcmp(str,temp);

    if(value==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
*/