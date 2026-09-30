#include <stdio.h>
#include <string.h>


int main(void) 

{

    unsigned char enc[] = { 100, 78, 67, 69, 89, 67, 64, 65, 70, 71, 68, 69, 74, 75, 72, 73, 78, 79, 76, 77, 82, 83, 80, 81, 86, 87, 84, 85, 90, 91, 88, 95 };
    char input[64];
    int key = 0;

    printf("Enter password: ");
    if (!fgets(input, sizeof(input), stdin)) return 1;
    input[strcspn(input, "\n")] = 0;


    for (int i = 0; i < strlen(input); i++) {
        key = key * 31 + input[i]; 
    }
    key = key & 0xFF;
    
    for (int i = 0; i < sizeof(enc); i++) {
        printf("%c", enc[i] ^ key);
    }

    printf("\n"); 
    return 0;
}