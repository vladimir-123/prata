#ifndef COW_H
#define COW_H
#include <string>
#include <iostream>

class Cow {
    char name[20];
    char* hobby;
    double weight;
public:
    Cow();
    Cow(const char* nm, const char* ho, double wt);
    Cow(const Cow& c);
    ~Cow();
    Cow& operator=(const Cow& c);
    void ShowCow() const;
};

#endif