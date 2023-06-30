// // cf problem
// //I. Welcome for you with Conditions 

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a>=b) printf("Yes\n");
//     else printf("No\n");

//     return 0;
// }

// cf problem
// J. Multiples

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a%b==0 || b%a==0)  printf("Multiples\n");
//     else printf("No Multiples\n");

//     return 0;
// }

//----------------------

// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a%b==0)  printf("Multiples\n");
//     else if(b%a==0)  printf("Multiples\n");
//     else printf("No Multiples\n");

//     return 0;
// }

// cf problem
// N. Char

// #include<stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);

//     if(c>='a' && c<='z') printf("%c",c-32);
//     else if(c>='A' && c<='Z') printf("%c",c+32);

//     return 0;
// }

//-------------------

// #include<stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);

//     if(c>='a' && c<='z')
//     {
//         int ans = c-32;
//         printf("%c\n",ans);
//     }
//     else{
//         int ans = c+32;
//         printf("%c\n",ans);
//     }

//     return 0;
// }


//P - First digit !

// #include<stdio.h>
// int main()
// {
//     int n,rem;
//     scanf("%d",&n);

//     while (n>=10)
//     {
//         n /=10;
//     }

//     if(n%2==0) printf("EVEN\n");
//     else printf("ODD\n");
    

//     return 0;
// }

// -----------

// #include<stdio.h>
// int main()
// {
//     int n,rem;
//     scanf("%d",&n);

//     while (n>0)
//     {
//         rem = n%10;
//         n /=10;
//     }

//     if(rem%2==0) printf("EVEN\n");
//     else printf("ODD\n");
    

//     return 0;
// }

//---------------

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     int ans = n/1000;// jehetu ei prblm a 4 digit e thkbe

//     if(ans%2==0) printf("EVEN\n");
//     else printf("ODD\n");

//     return 0;
// }  

// M. Capital or Small or Digit

// #include<stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c",&ch);

//     if(ch>='0' && ch <='9') printf("IS DIGIT\n");//48-57 ascii
//     else{
//         printf("ALPHA\n");
//         if(ch>='a' && ch<='z') printf("IS SMALL\n");//97-122
//         else if(ch>='A' && ch <='Z') printf("IS CAPITAL\n");//65-90
//     }

//     return 0;
// }

//------------------------------------------------------------------------


// #include<stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c",&ch);

//     if(ch>='0' && ch <='9') printf("IS DIGIT\n");//48-57 ascii
//     else{
//         printf("ALPHA\n");
//         if(ch>='a' && ch<='z') printf("IS SMALL\n");//97-122
//         else printf("IS CAPITAL\n");//65-90
//     }

//     return 0;
// }


//K. Max and Min

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if(a<=b && a<=c) printf("%d ",a);
//     else if(b<=a && b<c) printf("%d ",b);
//     else printf("%d ",c);

    
//     if(a>=b && a>c) printf("%d\n",a);
//     else if(b>=c && b>=a) printf("%d\n",b);
//     else printf("%d\n",c);

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if(a<b && a<c) printf("%d ",a);
//     else if(b<c) printf("%d ",b);
//     else printf("%d ",c);

    
//     if(a>b && a>c) printf("%d\n",a);
//     else if(b>c) printf("%d\n",b);
//     else printf("%d\n",c);

//     return 0;
// }

// phitron

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     // minimum
//     if(a<=b && a<=c)
//     {
//         printf("%d ",a);
//     }
//     else if(b<=a && b<=c)
//     {
//         printf("%d ",b);
//     }
//     else 
//     {
//         printf("%d ",c);
//     }

//     // maximum
//     if(a>=b && a>=c)
//     {
//         printf("%d\n",a);
//     }
//     else if(b>=a && b>=c)
//     {
//         printf("%d\n",b);
//     }
//     else 
//     {
//         printf("%d\n",c);
//     }
//     return 0;
// }