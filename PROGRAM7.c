#include<stdio.h>
int main()
{
    int day1,month1,year1,day2,month2,year2,u,v,w,x;
  
    char a;
   
    printf("Enter present date in dd/mm/yyyy format : ");
    scanf("%d%c%d%c%d",&day1,&a,&month1,&a,&year1);
    printf("\nEnter your date of birth in dd/mm/yyyy: ");
    
    scanf("%d%c%d%c%d",&day2,&a,&month2,&a,&year2);
    printf("\nYour present age is: ");
    u=day1-day2;
    v=month1-month2;
    w=year1-year2;
    x=u;
    if(u<0)
    {
        u=31+u;
    }
    else
    
    u=day1-day2;
    if(v<=0)
    { if(x<0)
      { v=11+v;
        w=w-1;
      }
      if(x>0)
      { w=year1-year2-1;
        v=v+12;
      }
    }
    else
    v=month1-month2;
  
    printf("%d Years %d Months %d Days",w,v,u);
    return 0;
}
