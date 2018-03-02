#include <stdio.h>
int main()
{
    int n, b=0, rem, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    
    while( n!=0 )
    {
        rem= n%10;
        b = b*10 + rem;
        n /= 10;
    }


    if (originalInteger == b)
{
        printf("%d is a palindrome.", originalInteger);
 }
   else
{
        printf("%d is not a palindrome.", originalInteger);
}
    
    return 0;
}
