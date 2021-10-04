/* Name   : BasicTest.h
 * Purpose:
 * Contacts: mmaygli@gmail.com
 *
 * History:
 * 01.10.2021 - Maygli - Creation of the file
 *
 * You can use this file as you want.
 * Link to author is welcome but don't required
 */
#ifndef HTTPPARSERTEST_H
#define HTTPPARSERTEST_H

#include <QObject>
#include <QTest>

class BasicTest : public QObject
{
  Q_OBJECT
public:
  explicit BasicTest(QObject *parent = nullptr);

signals:

public slots:
private slots:
  void testGetBound();
  void testParsingBinary();
  void testParsingText();
  void testMultiChunk();
};

#endif // HTTPPARSERTEST_H
