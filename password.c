  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";

    srand((unsigned int)time(NULL));

    printf("Generated Password: ");
    for (int i = 0; i < length; ++i) {
        int index = rand() % (sizeof(charset) - 1);
        printf("%c", charset[index]);
    }
    printf("\n");
}

int main() {
    int passwordLength;

    printf("Enter the desired password length: ");
    scanf("%d", &passwordLength);

    if (passwordLength <= 0) {
        printf("Password length must be greater than 0.\n");
        return 1; 
    }

    generatePassword(passwordLength);

    return 0; 
}
