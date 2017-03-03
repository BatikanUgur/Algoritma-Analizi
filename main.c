#include <stdio.h>
#include <stdlib.h>
// 0(b) kodu c
int power(int a,int b)
{
    int i;
    int mult = 1;
    for(i=0;i<b;i++)
    {
        mult = mult*a;
    }
    return mult;

}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int cevap = power(a,b);
    printf("%d",cevap);
    return 0;
}
