#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class timeStamp
{
private:
    int Hour;
    int Minute;
    int Second;

public:
    timeStamp();
    timeStamp(int second , int minute , int hour);
    int getSecond();
    int getMinute();
    int getHour();
    void setSecond(int second);
    void setMinute(int minute);
    void setHour(int hour);
    void print();

    friend bool operator>(timeStamp &obj1 , timeStamp &obj2);
    friend bool operator==(timeStamp &obj1 , timeStamp &obj2);
            

};

#endif // TIMESTAMP_H
