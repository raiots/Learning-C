#include <stdio.h>

int main()
{
    int m, n, divisor, multiple;
    printf("Please input two integers:");
    scanf("%d%d", &m, &n);
    
    divisor = m>n ? n:m;
    multiple = m>n ? m:n;
    
    for(divisor; divisor > 0; divisor--){
        if(m % divisor == 0 && n % divisor == 0){
            printf("The greatest common divisor is %d\n", divisor);
            break;
        }
    }
    
    for(multiple; multiple <= m * n; multiple++){
        if(multiple % m == 0 && multiple % n == 0){
            printf("The least common multiple is %d\n", multiple);
            break;
        }
    }
}
