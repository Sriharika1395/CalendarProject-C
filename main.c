#include <stdio.h>
#include <stdlib.h>



int daysInMonth[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
char months[13][20]=
{

     "",

     "January",

     "February",

     "March",

     "April",

     "May",

     "June",

     "July",

     "August",

     "September",

     "October",

     "November",

     "December"

    };



int determineFirstDayOfYear(int year)

{

 int d1, d2, d3;



 d1 = (year - 1.)/ 4.0;

 d2 = (year - 1.)/ 100.;

 d3 = (year - 1.)/ 400.;

 return (year + d1 - d2 + d3) %7;

}
int printMonthCalendar(int year,int month)
{
    int i;
    int firstday=determineFirstDayOfYear(year);
    printf("%s %d\n",months[month],year);
    printf("SUN MON TUE WED THU FRI SAT\n");
    for(i=1;i<=firstday;i++)
        printf("%4s"," ");
    for(i=1;i<=daysInMonth[month];i++)
    {
        printf("%4d",i);
        if((firstday+i)%7==0)
            printf("\n");
    }


}
int main()
{

    printMonthCalendar(2015,8);
    return 0;
}
