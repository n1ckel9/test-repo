#ifndef SEC_H
#define SEC_H

#include <string>

enum EDayofWeek {
    MONDAY,
    SUNDAY
};

class Car {
    private:
        int index;
    public:
        Car(int index);
        int x;  
        int getIndex();
};

void swap_a(int &a, int &b);

void swap_pointer(int* a, int* b);

void print(std::string s);

#endif // SEC_H
