#include <stdio.h>

int main()
{

    float shirt_price, discount, number, price_discount, final_price , full_price;

    scanf("%f", &shirt_price);
    getchar();
    scanf("%f", &discount);
    getchar();
    scanf("%f", &number);

    full_price = shirt_price * number;
    price_discount = full_price * (discount / 100);
    final_price = full_price - price_discount;

    printf("%.2f", final_price);

    return 0;
}