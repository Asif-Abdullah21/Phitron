// #include<stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d",&tk);

//     if(tk>=100)
//     {
//         printf("Burger khabo\n");
//     }
//     else printf("kissu khabo na\n");

//     return 0;
// }
//-----------------------
// #include <stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d", &tk);

//     if (tk >= 100)
//     {
//         printf("Burger khabo\n");
//     }
//     else if (tk >= 50)
//         printf("Fuchka Khabo\n");
//     else if (tk >= 20)
//         printf("ice cream Khabo\n");
//     else
//         printf("kissu khabo na\n");

//     return 0;
// }

#include <stdio.h>//nested if else
int main()
{
    int tk,value;
    value=0;
    int name=9;
    
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's bazare jabo\n");
        if (tk >= 10000)
            printf("Saint martin jabo\n");
        else
            printf("Back to home\n");
    }

    else
        printf("Kothau jabo na\n");

    return 0;
}