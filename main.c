#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1;
    double y1;
    double r1;

    double x2;
    double y2;
    double r2;

    double d;

    double s1;
    double s2;

    double rc;

    printf("Zadejte parametry kruznice #1:\n");
    if(scanf("%lf %lf %lf",&x1,&y1,&r1)!=3)
    {
        printf("Nespravny vstup.\n");
    }

    else if(r1<=0)
    {
        printf("Nespravny vstup.\n");
    }
    else
    {
        printf("Zadejte parametry kruznice #2:\n");
        if(scanf("%lf %lf %lf",&x2,&y2,&r2)!=3)
        {
           printf("Nespravny vstup.\n");
        }

        else if(r2<=0)
        {
            printf("Nespravny vstup.\n");
        }
        else
        {
            d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

            if(d==0)
            {
                s1=acos(-1)*r1*r1;
                s2=acos(-1)*r2*r2;
                if(s1>s2)
                {

                }
                

            }
            else
            {
                rc=r1+r2;
                if(d>rc)
                {
                    printf("Kruznice lezi vne sebe, zadny prekryv.\n");
                }
                else
                {

                }
                
            }
            
        }
        
        
    }
    
    
    

    
    



    return 0;
}
