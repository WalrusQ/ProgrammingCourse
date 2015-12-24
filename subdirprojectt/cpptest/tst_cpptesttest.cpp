#include <QString>
#include <QtTest>
#include "check_sizzling.h"
#include"conversation.h"
#include <string>
#include "rationalnum.h"
using std::string;

class CpptestTest : public QObject
{
    Q_OBJECT




private Q_SLOTS:
       void test_conversation();
    void test_sizzling();
    void test_inapsulation();
};


/// Тест на каждый паблик метод
/// Переименовать
void CpptestTest::test_inapsulation(){
    RationalNum Num;
    RationalNum Numb;
    Num.Multi(2);
    Num.sum(1);
    Num.divide(5);
    Numb.Copy(Num);
    QCOMPARE(Num.ToDouble(), 0.25 );
    QCOMPARE(Num.ToDouble(), Numb.ToDouble() );

}

void CpptestTest::test_conversation(){
    conversation num;
    QCOMPARE(num.convert(), 122344);
}
void CpptestTest::test_sizzling(){
    check_sizzling intext;
     QVERIFY2((intext.find_symbol() == "rastart numfa verar"), "Failure");

}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
