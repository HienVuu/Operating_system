#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if the minimum number of arguments is provided
    if (argc < 2) {
        printf("Usage: %s [arguments...]\n", argv[0]);
        return 1;
    }

    // Print the program name
    printf("Program name: %s\n", argv[0]);

    // Iterate through all provided arguments
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
