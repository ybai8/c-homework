#include <iostream>
#include<ctime>
#include<cstdio>

using namespace std;

bool ppp(int a){
            if((a%4==0&&a%100!=0)||a%400==0)
                return 1;
            else
                return 0;
        }
class JulDate {
private:
    const static int BASEYEAR; // turns into extern
    double jday;
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
    static JulDate now(){
        struct tm *ptr;
        time_t lt;
        lt =time(NULL);
        ptr=localtime(&lt);
        //cout<<ptr->tm_wday;
        return JulDate(ptr->tm_year+1900,ptr->tm_mon+1,ptr->tm_mday,ptr->tm_hour,ptr->tm_min,ptr->tm_sec,ptr->tm_wday);
    }
    friend bool g(JulDate a){
        if((a.year%4==0&&a.year%100!=0)||a.year%400==0)
            return 1;
        else
            return 0;
    }

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
    friend int doy(JulDate a,JulDate b){
        int num=0;
        for(int q=b.year;q<a.year;q++)
        {if(ppp(q)==1)
                num+=366;
        else
                num+=365;}
        return num;
    }

    friend int f(JulDate b){
        int d=0;
        const int daysinmonth1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
        const int daysinmonth2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(g(b)==1)
        {for(int i=1;i<b.month;i++)
                d+=daysinmonth2[i-1];}
        else if(g(b)==0)
           { for(int i=1;i<b.month;i++)
                d+=daysinmonth1[i-1];}
        return d;
    }
    friend int operator -(JulDate a,JulDate b){
        int e=doy(a,b)+f(a)-f(b)+a.day-b.day;
        return e;
    }

    int getYear(){
        return year;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
    friend ostream& operator <<(ostream& s,JulDate a){
        return s<<a.year<<' '<<a.month<<' '<<a.day<<' '<<a.hour<<' '<<a.min<<' '<<a.sec<<' '<<a.wday<<'\n';
    }
};

const int JulDate::BASEYEAR = 2000;  // (2000, 1,1, 0, 0, 0) = 0    (2000, 1, 2) = 1
/*
Every year has 365 days except... if y divisible by 4 leapyear 366 (Feb. 29)
except if the year mod 100 == 0  NO LEAP YEAR EXCEPT if year MOD 400 == 0 YES, it's a leap year.
  1900 NO (divisible by 100)
  1904 LEAP
  2000 LEAP (divisible by 400)
Jan Meeus "Astronomical Algorithms"
 */

int main() {
    JulDate d1 = JulDate::now();
    cout<<"Time now is "<<d1;
    JulDate (2005, 1, 15); // Jan 15, 2005
    //	cout << d1 + d2; // makes no sense!!!

    JulDate d2 = d1 + 1; // tomorrow
    cout<<"Tmorrow is "<<d2;
    JulDate d3(2052, 1, 1, 12, 00, 00);
    JulDate d4(2061, 2, 28, 11, 00, 00);
    double del = d4 - d3;
    cout << del  << "\n";
    cout << d4.getYear() << ":" << d4.getMonth() << ":" << d4.getDay() << '\n';
    JulDate d5(2004, 2,29);
    // extra 5 points if you get the following right!
    cout << d5.getYear() << ":" << d5.getMonth() << ":" << d5.getDay() << '\n';
}
