#include <stdio.h>

int main()
{
        float a,b;
        a=0.1f;
        b=0.1;
        printf("%f\n",a);
        printf("%f\n",b);
        printf("%1.10f\n",a);
        printf("%1.10f\n",b);

        printf("-------------\n");
        printf("0.1f is %1.20f\n",0.1f);
        printf("0.1  is %1.20f\n",0.1);
        return 0;
}
