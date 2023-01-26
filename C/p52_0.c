#include <stdio.h>
#include <time.h>

int main(void)
{
    enum Week {sun, mon, tue, wed, thu, fri, sat};
    enum Week today;
    struct tm *p;
    time_t t;

    time(&t);
    p = localtime(&t);

    today = p->tm_wday;
    switch (today)
    {
    case mon:
    case tue:
    case wed:
    case thu:
    case fri:
        printf("working day!");
        break;
        
    case sat:
    case sun:
        printf("weekend!");
        break;
    
    default:
        break;
    }
}