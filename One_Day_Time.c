#include <stdio.h>
int main()
{
    int hour,minute,second;
    printf("Programm To Print Until It Becomes One Day\n");
    printf("Enter the current time \n");
    printf("Enter the hours (Railway clock)  : \n");
    scanf("%d",&hour);
    printf("Enter the minutes: \n");
    scanf("%d",&minute);
    printf("Enter the seconds: \n");
    scanf("%d",&second);
    while(4<5){
        second++;
        if(second>59){
           second=0;
           minute++;
        }
        if(minute>59){
            minute=0;
            hour++;
        }
        printf("\n%d :%d :%d\n",hour,minute,second);
        if(hour=24){
            printf("One day is Compeleted");
            return 0;
        }
        }
    return 0;
}