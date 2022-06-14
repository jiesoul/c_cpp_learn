#include <iostream>
#include "container.h"
using namespace std;

class Vector
{
private:
    double* elem;
    int sz;
public:
    Vector(int s): elem{new double[s]}, sz{s}
    {
        for (int i=0; i!=s; ++i) 
            elem[i] = 0;
    }
    Vector(std::initializer_list<double>);
    ~Vector(){ delete[] elem; }

    double& operator[](int i);
    int size() const;

    void push_back(double);

    void read(istream& is) 
    {
        Vector v;
        for (double d; is>>d;)
            v.push_back(d);
        return v;
    }
};

class Vector_container : public Container {
    Vector v;

public:
    Vector_container(int s): v(s) { }
    ~Vector_container() {}

    double& operator[](int i) { return v[i]; }
    int size() const { return v.size(); }
};
