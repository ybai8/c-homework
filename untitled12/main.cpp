#include <stdio.h>
#include <time.h>
int main(void)
{
struct tm *ptr;
time_t lt;
lt =time(NULL);
ptr=localtime(&lt);
printf("second:%d\n",ptr->tm_sec);
printf("minute:%d\n",ptr->tm_min);
printf("hour:%d\n",ptr->tm_hour);
printf("mday:%d\n",ptr->tm_mday);
printf("month:%d\n",ptr->tm_mon+1);
printf("year:%d\n",ptr->tm_year+1900);
return 0;
}
