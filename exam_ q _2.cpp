#include <stdio.h>

 main()
 {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 <= num2 && num1 <= num3) {
        printf("%d is the smallest.\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d is the smallest.\n", num2);
    } else {
        printf("%d is the smallest.\n", num3);
    }
    
    
}
