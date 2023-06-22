#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int i, smallest, largest;
    smallest = 9; 
    largest = 0;  

    
    for (i = 0; i < n; i++) {
        int temp = numbers[i];
        
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digit < smallest)
                smallest = digit;
            if (digit > largest)
                largest = digit;
            temp /= 10;
        }
    }

    
    if (smallest == 9 && largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}