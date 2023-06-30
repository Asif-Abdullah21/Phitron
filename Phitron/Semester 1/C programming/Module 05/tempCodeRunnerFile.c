
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='0' && ch <='9') printf("IS DIGIT\n");//48-57 ascii
    else{
        printf("ALPHA\n");
        if(ch>='a' && ch<='z') printf("IS SMALL\n");//97-122
        else printf("IS CAPITAL\n");//65-90
    }

    return 0;
}