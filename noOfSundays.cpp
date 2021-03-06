/*You are given the following information, but you may prefer to do some research for
yourself
● 1 Jan 1900 was a Monday.
● Thirty days has September,
● April, June and November.
● All the rest have thirty-one,
● Saving February alone,
● Which has twenty-eight, rain or shine.
● And on leap years, twenty-nine.
● A leap year occurs on any year evenly divisible by 4, but not on a century
unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan
1901 to 31 Dec 2000)?*/



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int noOfSundays = 0,temp=1;
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int year=1901;year<=2000;year++){
        for(int month=0;month<12;month++){
            if(year%4==0 && month==1){
                for(int day=1;day<=29;day++){
                    temp++;
                    if(temp==7){
                        if(day==1)
                        noOfSundays++;
                        temp=0;
                    }
                }
            }
            else{
                for(int day=1;day<=daysInMonth[month];day++){
                    temp++;
                    if(temp==7){
                        if(day==1)
                        noOfSundays++;
                        temp=0;
                    }
                }
            }
        }
    }
    cout<<noOfSundays;
return 0;
}
