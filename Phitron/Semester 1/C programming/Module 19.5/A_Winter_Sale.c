#include<stdio.h>
int main()    // 10/05/2023 //
{
    double x,p;
    scanf("%lf %lf",&x,&p);

    double ans = (100*p)/(100-x);
    printf("%.2lf\n",ans);

    
    return 0;
}



/*
1/12/2022:

#include<stdio.h>

float final_price(float,float);

int main()
{
    float discount_percentage_x,price_after_discount,main_price;
    scanf("%f %f",&discount_percentage_x,&price_after_discount);

    main_price = final_price(discount_percentage_x,price_after_discount);

    printf("%0.2f\n",main_price);

    return 0;
}

float final_price(float x,float p)
{
    float ans = (100*p)/(100-x);

    return ans;
}


*/