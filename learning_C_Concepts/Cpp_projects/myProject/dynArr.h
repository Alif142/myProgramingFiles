#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr {
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int index, int value);
    int getValue(int value);
    void allocate(int s);
};
#endif // DYNARR_H_INCLUDED
