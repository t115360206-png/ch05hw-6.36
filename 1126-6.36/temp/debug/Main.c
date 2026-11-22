#include <stdio.h>

void stringReverse(const char strArray[]);

int main(void) {
    char str[] = "NTUT Electronic Engineering";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");

    return 0;
}

void stringReverse(const char strArray[]) {
    if (strArray[0] == '\0') {
        return; // 遇到字串結尾符號 '\0' 時停止並返回
    }

    stringReverse(&strArray[1]); // 先遞迴處理下一個字元
    printf("%c", strArray[0]);   // 遞迴返回時才印出當前字元
}