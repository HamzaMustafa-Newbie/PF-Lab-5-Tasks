#include <stdio.h>

int main() {
    char a;
    int KEY;

    printf("Enter character: ");
    scanf(" %c", &a);

    printf("Enter encryption key (0-255): ");
    scanf("%d", &KEY);

    char Encrypted = a ^ KEY;
    char Decrypted = Encrypted ^ KEY;

    printf("Character: %c\n", a);
    printf("Encrypted: %c\n", Encrypted);
    printf("Decrypted: %c\n", Decrypted);

    return 0;
}
