#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class timeStamp
{
private:
    int seconds, minutes, hours;

public:
    timeStamp();
    timeStamp(int, int, int);

    void setSeconds(int);
    void setMinutes(int);
    void setHours(int);

    int getSeconds();
    int getMinutes();
    int getHours();

    void printTime();

    friend bool operator==(timeStamp &, timeStamp &);
    friend bool operator!=(timeStamp &, timeStamp &);
    friend bool operator>(timeStamp &, timeStamp &);
    friend bool operator<(timeStamp &, timeStamp &);
};

#endif // TIMESTAMP_H
