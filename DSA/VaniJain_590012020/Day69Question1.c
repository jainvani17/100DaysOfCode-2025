#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 256 
bool canFormPalindrome(char *str) 
{
    int freq[MAX] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        freq[(int)str[i]]++;
    }
    int oddCount = 0;
    for (int i = 0; i < MAX; i++) 
    {
        if (freq[i] % 2 != 0)
            oddCount++;
    }
    if ((len % 2 == 0 && oddCount == 0) || (len % 2 == 1 && oddCount == 1))
        return true;
    else
        return false;
}
int main() 
{
    char str1[] = "civic";   
    char str2[] = "ivicc";  
    char str3[] = "hello";   
    printf("%s -> %s\n", str1, canFormPalindrome(str1) ? "YES" : "NO");
    printf("%s -> %s\n", str2, canFormPalindrome(str2) ? "YES" : "NO");
    printf("%s -> %s\n", str3, canFormPalindrome(str3) ? "YES" : "NO");
    return 0;
}
