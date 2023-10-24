//Electricity Bill
#include <stdio.h>

int main() {
    int units_consumed;
    double cost_per_unit, base_cost, surcharge, total_cost;

    
    scanf("%d", &units_consumed);

    if (units_consumed <= 199) {
        cost_per_unit = 1.20;
    } else if (units_consumed < 400) {
        cost_per_unit = 1.40;
    } else if (units_consumed < 600) {
        cost_per_unit = 1.60;
    } else if (units_consumed < 800) {
        cost_per_unit = 1.80;
    } else {
        cost_per_unit = 2.00;
    }

    base_cost = units_consumed * cost_per_unit;

    if (base_cost > 400) {
        surcharge = 0.15 * base_cost;
        total_cost = base_cost + surcharge;
    } else {
        surcharge = 0.0;
        total_cost = base_cost;
    }

    printf("Units Consumed: %d
", units_consumed);
    printf("Cost per Unit: %.2f
", cost_per_unit);
    printf("Bill: %.2f
", base_cost);
    printf("Surcharge: %.2f
", surcharge);
    printf("Total Amount: %.2f
", total_cost);

    return 0;
}
