#include<stdio.h>
int main()
{
    char name[50];
    double meal_rate,total_meal,total_pay,total_buy,money_back,money_give;
    printf("Enter the member info below: \nname:");
    gets(name);
    printf("Enter meal rate:>\n");
    scanf("%lf",&meal_rate);
    printf("\nTotal pay:");
    scanf("%lf",&total_pay);
    printf("\nTotal meal:");
    scanf("%lf",&total_meal);
    total_buy = meal_rate * total_meal;

    if(total_buy>total_pay)
    {
        money_give = total_buy - total_pay;
        printf("\nName:%s\nTotal meal:%.2f\nMeal rate:%.2f\nTotal pay:%.2f\n",name,total_meal,meal_rate,total_pay);
         printf("Total buy:%.2f\nMoney give:%.2f",total_buy,money_give);
    }
    else
    {
        money_back = total_pay - total_buy;
        printf("\nName:%s\nTotal meal:%.2f\nMeal rate:%.2f\nTotal pay:%.2f\n",name,total_meal,meal_rate,total_pay);
        printf("Total buy:%.2f\nMoney back:%.2f",total_buy,money_back);
    }


    return(0);
}
