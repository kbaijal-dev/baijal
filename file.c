#include <stdio.h>
int main()
{
    int n, i;
 long f = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(int i=1; i<=n; ++i)
        {
            f=f*i;
        }
        
    }
    if(f%2==0)
        printf("Factorial of %d = %ld and is even", n, f);
    return 0;
}
