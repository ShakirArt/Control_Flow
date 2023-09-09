#include <stdio.h>

int main() {
    char character;
    printf("Enter a Character ");
    scanf("%c", &character);
    switch (character){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel", character);
            break;
        default:
            printf("%c is a consonant", character);
            break;
    }
    return 0;
}
