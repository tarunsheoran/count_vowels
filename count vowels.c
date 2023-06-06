#include <stdio.h>

int countVowels(const char* str) {
    int count = 0;
    char c;
    
    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    
    return count;
}

int main() {
    const char* str = "Tarun Sheoran";
    int vowelCount = countVowels(str);
    
    printf("Number of vowels: %d\n", vowelCount);
    
    return 0;
}
