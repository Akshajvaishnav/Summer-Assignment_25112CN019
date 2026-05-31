#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count the total number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate the sum of power of individual digits
    while (temp > 0) {
        int remainder = temp % 10;
        
        // round or cast to int to counter potential float inaccuracies from pow()
        sum += (int)round(pow(remainder, digits)); 
        
        temp /= 10;
    }

    // Return 1 if sum matches the original number, else return 0
    return (sum == originalNum);
}

int main() {
    int start, end;

    // Get the range inputs from the user
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    // Swap values if the user enters the higher number first
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);
    
    int found = 0;
    // Iterate through the given range
    for (int i = start; i <= end; i++) {
        // Skip negative numbers as Armstrong numbers are traditionally positive
        if (i < 0) {
            continue;
        }
        
        if (isArmstrong(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None found in this range.");
    }
    
    printf("\n");
    return 0;
}
