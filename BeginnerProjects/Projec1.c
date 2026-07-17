// This program calculates the total monthly cost of electricity for various appliances.
// Features: Grouping variables by type, Direct accumulation using math operators, and Printing the output with a new line at the end

#include <stdio.h>

int main() {
    // Grouping variables cleanly by type
    char currency_symbol = '$';
    double total_monthly_cost = 0.0;
    float per_unit_cost = 20.0;
    float oven_unit   = 21.0;
    float fridge_unit = 12.0;
    float ac_unit     = 51.0;
    
    // Direct accumulation using math operators + augmented assignments
    total_monthly_cost += oven_unit * per_unit_cost;
    total_monthly_cost += fridge_unit * per_unit_cost;
    total_monthly_cost += ac_unit * per_unit_cost;
    
    // Printing the output with a new line at the end (\n is good practice!)
    printf("The total monthly cost of electricity is %.2f%c\n", total_monthly_cost, currency_symbol);
    
    return 0;
}