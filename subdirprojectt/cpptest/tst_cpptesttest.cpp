#include <QString>
#include <QtTest>
#include "check_sizzling.h"
#include"double_even_numbers.h"
#include <string>
#include "rationalnum.h"
using std::string;

class CpptestTest : public QObject
{
    Q_OBJECT




private Q_SLOTS:
    void test_conversation();
    void test_sizzling();
    void test_rational_sum();
    void test_rational_multi();
    void test_rational_divide();

};

void CpptestTest::test_rational_divide(){
    RationalNum num;
    num.Divide(2);
    QCOMPARE(num.ToDouble(), 0.06250);
}
void CpptestTest::test_rational_multi(){
    RationalNum num;
    num.Multi(2);
    QCOMPARE(num.ToDouble(), 0.25);
}
void CpptestTest::test_rational_sum(){
    RationalNum num;
    num.Sum(1);
    QCOMPARE(num.ToDouble(), 1.125);
}


void CpptestTest::test_conversation(){
    double_even_numbers num;
    QCOMPARE(num.convert(), 122344);
}
void CpptestTest::test_sizzling(){
    check_sizzling intext;
    QVERIFY2((intext.find_symbol_and_change_if_need() == "rastart numfa vewern"), "Failure");
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
