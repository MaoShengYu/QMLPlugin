#include "noticeboard.h"

NoticeBoard::NoticeBoard(QQuickItem *parent) : QQuickPaintedItem(parent)
{

}

NoticeBoard::~NoticeBoard()
{

}

QString NoticeBoard::getColor() const
{
    return color;
}

void NoticeBoard::setColor(const QString &color)
{
    this->color = color;
    emit colorChanged();
}

QString NoticeBoard::getText() const
{
    return text;
}

void NoticeBoard::setText(const QString &text)
{
    this->text = text;
    emit textChanged();
}

QString NoticeBoard::getTextColor() const
{
    return textColor;
}

void NoticeBoard::setTextColor(const QString &textColor)
{
    this->textColor = textColor;
    emit textColorChanged();
}

void NoticeBoard::paint(QPainter *painter)
{
    QBrush brush;   //画刷。填充几何图形的调色板，由颜色和填充风格组成
    brush.setColor(QColor(color));
    brush.setStyle(Qt::SolidPattern);
    QPen pen;       //画笔。
    pen.setColor(QColor(color));

    //在画板上画一个跟画板同宽同高的矩形
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawRect(0, 0, this->width(), this->height());

    //在画板上画文字
    QFont font("宋体", 20, QFont::Bold, true);
    pen.setColor(QColor(textColor));
    painter->setPen(pen);
    painter->setFont(font);
    painter->drawText(0, 0, this->width(), this->height(), Qt::AlignCenter, text);
}
