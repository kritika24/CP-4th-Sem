//programmes to calculate largest of 3 numbers
#include <stdio.h>
int main() {
        float a,b,c;
        printf("Enter the three Numbers (with space)\n");
        scanf("%f %f %f",&a,&b,&c);
        printf("\n");
        if (a==b && a==c)
        {
                printf("%f is the largest\n",a);
        }
        if (a>b && a>c)
        {
                printf("%f is the largest\n",a);
        }
        else if(b>c)
        {
                        printf("%f is the largest\n",b);
        }
       else
         {
                        printf("%f is the largest\n",c);
         }
        
             return 0;
}
