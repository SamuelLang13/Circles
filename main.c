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
    double d1;
    double d2;

    double s1;
    double s2;

    double rc;
    double rozdielr;

    double sc;

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
            s1=acos(-1)*r1*r1;
            s2=acos(-1)*r2*r2;

            if(d==0)
            {

                if (s1==s2)
                {
                    //Kruznice splyvaju,
                    printf("Kruznice splyvaji, prekryv: %f\n",s1);
                }
                else if(s1>s2)
                {
                    printf("Kruznice #2 lezi uvnitr kruznice #1, prekryv: %f\n",s2);
                }
                else if(s2>s1)
                {
                    printf("Kruznice #1 lezi uvnitr kruznice #2, prekryv: %f\n",s1);
                }
                
            }
            else
            {
                rc=r1+r2;
                rozdielr=fabs(r1-r2);

                if(d>rc)
                {
                    printf("Kruznice lezi vne sebe, zadny prekryv.\n");
                }
                else if(d==rc)
                {
                    //Kruznice sa dotykaju zvonka
                    printf("Vnejsi dotyk, zadny prekryv.\n");
                }
                else if((rozdielr<d)&&(d<rc))
                {   
                    //Kruznice nelezia v sebe a maju iba prekryv
                    d2=(r2*r2-r1*r1+d*d)/(d*2.0);
                    d1=d-d2;
                    sc=(r1*r1)*acos(d1/r1)-d1*sqrt(r1*r1-d1*d1)+
                    (r2*r2)*acos(d2/r2)-d2*sqrt(r2*r2-d2*d2);
                    printf("Kruznice se protinaji, prekryv: %f\n",sc);

                }
                else if(d==rozdielr)
                {

                    if(s1>s2)
                    {
                        printf("Vnitrni dotyk, kruznice #2 lezi uvnitr kruznice #1, prekryv: %f\n",s2);
                    }
                    else 
                    {
                        printf("Vnitrni dotyk, kruznice #2 lezi uvnitr kruznice #1, prekryv: %f\n",s1);
                    }

                }
                else if(d<rozdielr)
                {

                    
                    if(s1>s2)
                    {
                        printf("Kruznice #2 lezi uvnitr kruznice #1, prekryv: %f\n",s2);
                    }
                    else 
                    {
                        printf("Kruznice #1 lezi uvnitr kruznice #2, prekryv: %f\n",s1);
                    }
                }
                
            }
            
        }
        
        
    }
    
    
    

    
    



    return 0;
}
