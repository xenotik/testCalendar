#ifndef CALENDARWWW_H
#define CALENDARWWW_H


#include <QCalendarWidget>

class calendarWWW : public QCalendarWidget
{
    Q_OBJECT
public:
    calendarWWW();

    QCalendarWidget *calend;
};

#endif // CALENDARWWW_H
