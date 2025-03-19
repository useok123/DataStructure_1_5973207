#include <stdio.h>

// µ¡¼À ÇÔ¼ö
int add(int a, int b);

// »¬¼À ÇÔ¼ö
int subtract(int a, int b);

// °ö¼À ÇÔ¼ö
int multiply(int a, int b);

// ³ª´°¼À ÇÔ¼ö
float divide(int a, int b);

int main() {
    int num1, num2;

    // »ç¿ëÀÚ·ÎºÎÅÍ ¾çÀÇ Á¤¼ö ÀÔ·Â¹Ş±â
    printf("Ã¹ ¹øÂ° ¾çÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf_s("%d", &num1);

    printf("µÎ ¹øÂ° ¾çÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf_s("%d", &num2);

    // »çÄ¢¿¬»ê °á°ú Ãâ·Â
    printf("µ¡¼À: %d\n", add(num1, num2));
    printf("»¬¼À: %d\n", subtract(num1, num2));
    printf("°ö¼À: %d\n", multiply(num1, num2));
    printf("³ª´°¼À: %.2f\n", divide(num1, num2));

    return 0;
}

// µ¡¼À ÇÔ¼ö
int add(int a, int b) {
    return a + b;
}

// »¬¼À ÇÔ¼ö
int subtract(int a, int b) {
    return a - b;
}

// °ö¼À ÇÔ¼ö
int multiply(int a, int b) {
    return a * b;
}

// ³ª´°¼À ÇÔ¼ö
float divide(int a, int b) {
    return (float)a / b;  // Á¤¼ö¸¦ ½Ç¼ö·Î º¯È¯ÈÄ ³ª´©±â
}
