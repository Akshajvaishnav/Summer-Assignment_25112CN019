#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
   
    while (temp > 0) {
        int remainder = temp % 10;
        sum += (int)round(pow(remainder, digits)); 
        
        temp /= 10;
    }

   
    return (sum == originalNum);
}

int main() {
    int start, end;


    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

  
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);
    
    int found = 0;

    for (int i = start; i <= end; i++) {

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
