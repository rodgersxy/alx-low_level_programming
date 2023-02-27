#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for the 101-crackme program
 *
 * Return: 0 if successful
 */
int main() {
	int length = 10; // Length of password
	char password[length+1]; // Array to store password

    // Seed random number generator with current time
	srand(time(NULL));

    // Generate random password
	for (int i = 0; i < length; i++) {
	int random_num = rand() % 62; // Generate random number between 0 and 61
	if (random_num < 26) {
            password[i] = 'a' + random_num; // Convert to lowercase letter
        } else if (random_num < 52) {
            password[i] = 'A' + random_num - 26; // Convert to uppercase letter
        } else {
            password[i] = '0' + random_num - 52; // Convert to digit
        }
    }

    password[length] = '\0'; // Add null terminator to end of password

    printf("Generated password: %s\n", password);

    return 0;
}
