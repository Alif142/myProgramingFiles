#ifndef DYNARR_H
#define DYNARR_H
template <class T>
class dynArr
{
private:
int *data;
int size;
public:
dynArr();
dynArr(int);
~dynArr();
void setValue(int index, T value);
T getValue(int index);
};
#endif // DYNARR_H
