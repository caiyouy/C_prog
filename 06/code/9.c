#include <stdio.h>
#include <math.h>


int main()
{
        long double sum=0;
        double exact=3.14159265;
        long double pi=0;
        double i=1.0;
        while(exact-pi>1e-5)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.6Lf %.6Lf %d\n",sum,pi,(int)(i-1));
        
        pi=0L;
        sum=0L;
        i=1.0;
        while(exact-pi>1e-6)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.7Lf %.7Lf %d\n",sum,pi,(int)(i-1));

        pi=0L;
        sum=0L;
        i=1.0;
        while(exact-pi>1e-7)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.8Lf %.8Lf %d\n",sum,pi,(int)(i-1));

        return 0;
}
        
