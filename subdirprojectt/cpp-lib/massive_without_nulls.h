#ifndef MATRIX_WITHOUT_NULLS_H
#define MATRIX_WITHOUT_NULLS_H

/// Переделать в класс массива с внятным конструктором и деструктором и конструктором копирования и оператором индексации
/// и методом "убреру-ка-я-свои-нули"
class massive_without_nulls
{
private:
    int* array;
    int* new_array;
public:
    massive_without_nulls();
    void converting_matrix();
    ~massive_without_nulls();
};

#endif // MATRIX_WITHOUT_NULLS_H
