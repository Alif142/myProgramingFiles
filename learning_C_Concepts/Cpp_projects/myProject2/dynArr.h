#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int **data;
    int rows,cols;
public:
    dynArr();
    dynArr(int rows ,int cols);
    ~dynArr();
    void setValue(int rows, int cols, int value);
    int getValue(int rows, int cols);
    void allocate(int newRows , int newCols );
};
#endif // DYNARR_H_INCLUDED
