#include "calendarwww.h"
#include "qpainter.h"
#include "qtextformat.h"

calendarWWW::calendarWWW()
{
    calend = new QCalendarWidget;
    QTextCharFormat format;
    format.setBackground(QBrush(QColor(155, 155, 155)));
    //format.setTextOutline(QPen(Qt::green, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin));

    calend->setDateTextFormat(QDate::currentDate(),format);
    calend->setGridVisible(true);
//    QBrush self;
//    QPainter painter;
//    self = QBrush(Qt::Dense6Pattern);
//    self.setColor(QColor(Qt::red));
//    painter.setBrush(self);
    // painter.drawRect(rect);

//    painter.setPen(QColor(168, 34, 3));
    //painter.setFont(QFont('Decorative', 10))   ;
    //painter.drawText(QRectF(rect), Qt.TextSingleLine|Qt.AlignCenter, str(date.day()));
    //painter.drawText(rect, Qt.AlignCenter, 'Hello\nWorld');
   // calend->paintCell(&painter, QRect(100, 200, 11, 16), QDate::currentDate());
}
