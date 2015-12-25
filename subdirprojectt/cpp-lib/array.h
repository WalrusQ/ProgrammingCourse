#ifndef MATRIX_WITHOUT_NULLS_H
#define MATRIX_WITHOUT_NULLS_H

class Array
{
private:
    int size;
    int * pointer;
public:
    Array(int size = 15);
    Array(Array &);
    void operator=(Array &);
    int operator[](int) const;
    ~Array();
    void delete_nulls(Array &);
};

#endif // MATRIX_WITHOUT_NULLS_H
