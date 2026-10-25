#include <stdio.h>

int main() {
    // 1. Declare and initialize the array
    float budgets[5] = {2500000, 1800000, 4500000, 3200000, 2100000};
    float temp;
    float total = 0;
    
    printf("--- Original Budgets ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
        total += budgets[i]; // Calculate total
    }
    
    printf("\nTotal Budget: %.2f\n", total);
    printf("Average Budget: %.2f\n\n", total / 5);
    
    // 2. Bubble Sort (Ascending order)
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                // Swap the elements
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }
    
    // 3. Print the sorted array
    printf("--- Budgets Sorted (Lowest to Highest) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", budgets[i]);
    }
    
    return 0;
}