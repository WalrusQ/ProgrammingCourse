#include <QString>
#include <QtTest>
#include "check_sizzling.h"
#include"conversation.h"
#include <string>
using std::string;

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void testCase1();
    void test_conversation();
    void test_sizzling();
};

CpptestTest::CpptestTest()
{
}

void CpptestTest::testCase1()
{
    QVERIFY2(true, "Failure");

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
