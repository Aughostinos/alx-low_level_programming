#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Initialize a variable to store the sum
    int sum = 0;

    // Check if there are any command-line arguments
    if (argc == 1) {
        // No arguments provided, print 0 and return
        printf("0\n");
        return 0;
    }

    // Loop through the arguments starting from argv[1] (argv[0] is the program name)
    for (int i = 1; i < argc; i++) {
        // Attempt to convert the argument to an integer
        int num = atoi(argv[i]);

        // Check if the conversion was successful and the number is positive
        if (num <= 0) {
            // Invalid input, print Error and return 1
            printf("Error\n");
            return 1;
        }

        // Add the valid positive number to the sum
        sum += num;
    }

    // Print the result and return 0
    printf("%d\n", sum);
    return 0;
}
