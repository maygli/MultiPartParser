/* Name   : main.cpp
 * Purpose:
 * Contacts: mmaygli@gmail.com
 *
 * History:
 * 28.09.2021 - Maygli - Creation of the file
 *
 * You can use this file as you want.
 * Link to author is welcome but don't required
 */
#include <QCoreApplication>

#include "BasicTest.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  BasicTest aTest1;
  QTest::qExec(&aTest1);
  return 0;
}
