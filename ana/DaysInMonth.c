#include <stdio.h>

int main(void)

{
    int year;
    int month;
    int days;
    printf(" \n연도와 월을 입력하시오\n");
    scanf("%d%d", &year, &month);

    if ((( (year % 4 == 0) && (year % 100 != 0)  ) || ( year % 400 == 0)) && ( month == 2))
        {
            days = 29;
            printf("윤년입니다.");
        }
    else 
    {
        switch (month)
        {
            case 4 :
                days = 30;
                break;
    
            case 6 :
                days = 30;
                break;

            case 9 :
                 days = 30;
                break;

            case 11 :
                days = 30;
                break;

            case 2 :
                days = 28 ;
                break;

            default :
                days = 31;
                break;
        }
    }

    printf(" %d년 %d월의 일수는 %d일이다.\n\n", year, month, days);

    return 0;
}