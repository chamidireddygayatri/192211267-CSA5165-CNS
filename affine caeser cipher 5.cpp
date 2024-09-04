#include <stdio.h>

int mod(int a, int b) {
    return (a % b + b) % b;
}

char affine_cipher(char p, int a, int b) {
    return 'A' + mod(a * (p - 'A') + b, 26);
}

int main() {
    int a, b;
    char plaintext[100];
    
    printf("Enter the value of a (must be coprime to 26): ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Enter plaintext: ");
    scanf("%s", plaintext);
    
    printf("Ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++) {
        printf("%c", affine_cipher(plaintext[i], a, b));
    }
    printf("\n");
    
    return 0;
}

