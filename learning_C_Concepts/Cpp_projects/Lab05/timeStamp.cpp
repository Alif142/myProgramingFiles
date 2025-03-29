#include "timeStamp.h"
#include <iostream>
using namespace std;
timeStamp::timeStamp()
{
    Second = 0;
    Minute = 0;
    Hour = 0;
}
timeStamp::timeStamp(int second , int minute , int hour)
{
    Second = second;
    Minute = minute;
    Hour = hour;
}

int timeStamp::getSecond(){
    return Second;
}

int timeStamp::getMinute(){
    return Minute;
}

int timeStamp::getHour(){
    return Hour;
}

void timeStamp::setSecond(int second){
    Second = second;
}

void timeStamp::setMinute(int minute){
    Minute = minute;
}

void timeStamp::setHour(int hour){
    Hour = hour;
}

void timeStamp::print(){
    cout<<Second<<":"<<Minute<<":" << Hour<<endl;
}

bool operator>(timeStamp &obj1 , timeStamp &obj2){
    if (obj1.getHour() > obj2.getHour()) {
        return true;    
    }
    else
        return false;
}
bool operator==(timeStamp &obj1 , timeStamp &obj2){
    if (obj1.getHour() == obj2.getHour() && obj1.getMinute() == obj2.getMinute() && obj1.getSecond() == obj2.getSecond()) {
        return true;    
    }
    else
        return false;
}
