#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;


class JulDate {
private:

    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
    int wday;
public:
    JulDate(int year=2000,int month=1,int day=0,int hour=0,int min=00,int sec=00,int wday=0):
    year(year),month(month),day(day),hour(hour),min(min),sec(sec){
        struct tm *ptr;
        time_t lt;
        lt =time(NULL);
        ptr=localtime(&lt);
        this->wday=ptr->tm_wday;
    }
    //time now(year,month,day,hour,min,sec,weekday)
    static JulDate now(){
        struct tm *ptr;
        time_t lt;
        lt =time(NULL);
        ptr=localtime(&lt);
        //cout<<ptr->tm_wday;
        return JulDate(ptr->tm_year+1900,ptr->tm_mon+1,ptr->tm_mday,ptr->tm_hour,ptr->tm_min,ptr->tm_sec,ptr->tm_wday);
    }

        //+1 day +1 week
        friend JulDate operator + (JulDate a,int b) {
            const int daysinmonth1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            const int daysinmonth2[12]={31,28,31,30,31,30,31,31,30,31,30,31};

            if(a.month==12&&a.day+b>31)
                return JulDate (a.year+1,1,b-31+a.day,a.hour,a.min,a.sec);
            if(g(a)&&a.month<12&&a.day+b>daysinmonth1[a.month-1])
               return JulDate(a.year,a.month+1,b-daysinmonth1[a.month]+a.day-1,a.hour,a.min,a.sec);
            if(!g(a)&&a.month<12&&a.day+b>daysinmonth2[a.month]-1)
                return JulDate(a.year,a.month+1,b-daysinmonth2[a.month-1]+a.day-1,a.hour,a.min,a.sec);
            else
                return JulDate(a.year,a.month,a.day+b,a.hour,a.min,a.sec);
        }

        //If the day is a festival
        friend string festival(JulDate d){
                if(d.month==1&&d.wday==1&&d.day>20&&d.day<28)
                    return s="Martin Luther King,Jr.Day No class!";
                if(d.month==2&&d.wday==1&&d.day>20&&d.day<28)
                    return s="Presidents' Day No class!";
                if(d.month==5&&d.wday==1&&d.day>24&&d.day<=31)
                    return s="Memorial Day No class!";
                if(d.month==7&&d.day==4)
                    return s="Independence Day No class!";
                if(d.month==9&&d.wday==1&&d.day>=1&&d.day<7)
                    return s="Labor Day No class!";
                if(d.month==10&&d.wday==1&&d.day>13&&d.day<21)
                    return s="Fall Recess No class!";
                if(d.month==11&&d.day==11)
                    return s="Veterans Day No class!";
                if(d.month==11&&d.wday=4&&d.day>=25&&d.day<=30)
                    return s="Thanksgiving  Recess No class!";
            }
         friend ostream& operator <<(ostream& s,JulDate a){
             return s<<a.year<<' '<<a.month<<' '<<a.day<<' '<<a.hour<<' '<<a.min<<' '<<a.sec<<' '<<a.wday<<'\n';
         }
         };


