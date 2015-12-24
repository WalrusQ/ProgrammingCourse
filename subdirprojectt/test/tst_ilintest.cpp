#include <QString>
#include <QtTest>
#include "conversation.h"
#include "translation.h"


class IlinTest : public QObject
{
    Q_OBJECT

public:
    IlinTest();

private Q_SLOTS:
   void test_conversation();
   void test_translation();
};

IlinTest::IlinTest()
{
}

void IlinTest::test_conversation()
{   int number = 12234;
        QCOMPARE(double_even_numbers(number), 12222344);

}
void IlinTest::test_translation()
{
    double radians = 0.5;
    Angle angle;
    translation(radians, &angle);
    QCOMPARE(angle.degree, 28);
    QCOMPARE(angle.min, 39);
    QCOMPARE(angle.sec, 44);

}

QTEST_APPLESS_MAIN(IlinTest)

#include "tst_ilintest.moc"
