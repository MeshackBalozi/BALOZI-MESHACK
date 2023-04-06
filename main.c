#include <stdio.h>

int main() {
    char customer_name[50];
    int units_consumed;
    float total_bill;

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter units consumed: ");
    scanf("%d", &units_consumed);

    if (units_consumed <= 100) {
        total_bill = units_consumed * 0.50;
    } else if (units_consumed <= 200) {
        total_bill = 50 + (units_consumed - 100) * 0.75;
    } else if (units_consumed <= 300) {
        total_bill = 100 + (units_consumed - 200) * 1.20;
    } else {
        total_bill = 220 + (units_consumed - 300) * 1.50;
    }

    printf("Customer Name: %s\n", customer_name);
    printf("Units consumed: %d\n", units_consumed);
    printf("Total bill: Rs. %.2f\n", total_bill);

    return 0;
}

