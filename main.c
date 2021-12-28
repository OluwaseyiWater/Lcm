#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter two numbers: ");
    int i1 =0, i2 = 0;
    scanf("%d %d", &i1, &i2);

    int HCF = 0;
    int max = (i1>i2) ? i1 : i2;
    for(int i = 1; i<= max/2; i++)
        if(i1%i == 0 && i2%i == 0)
        HCF = i;


    int LCM = max;
    for(; LCM <= i1*i2; LCM++)
        if(LCM%i1 == 0 && LCM%i2 == 0)
        break;

    printf("HCF=%d, LCM=%d", HCF, LCM);
    return 0;
}
