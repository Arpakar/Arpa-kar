#include<stdio.h>
#include<math.h>
  #define F(x)  (x*x*x-9*x+1)
#define e .001

int main()
{
    int i=0;
    float a,b,c,f,f1,f2;
    printf( "\n Enter a and b: ");
    scanf("%f%f",&a,&b);

    do
    {


        f1=F(a);
        f2=F(b);
        c=a+b/2;
        f=F(c);

       // printf("\n i=%d  a=%f b=%f c=%f F(c)=%f " ,i,a,b,c,f);

        if(F(a)*F(c)<0)
        {
            b=c;

        }
        else
        {
            a=c;
        }
        i++;
        printf("\n i=%d  a=%f b=%f  f1=%f  f2=%f  c=%f F(c)=%f " ,i,a,b,c,f);
    }
    while(fabs(F(c))>e);

    printf("\n Root = %.5f \n ",c);



    return 0;

}
