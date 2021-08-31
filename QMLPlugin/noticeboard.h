#ifndef NOTICEBOARD_H
#define NOTICEBOARD_H

#include <QQuickPaintedItem>
#include <QPainter>

class NoticeBoard : public QQuickPaintedItem
{
    Q_OBJECT
    Q_DISABLE_COPY(NoticeBoard)
    Q_PROPERTY(QString color READ getColor WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
    Q_PROPERTY(QString textColor READ getTextColor WRITE setTextColor NOTIFY textColorChanged)
public:
    NoticeBoard(QQuickItem *parent = nullptr);
    ~NoticeBoard() override;
    QString getColor() const;
    void setColor(const QString &color);

    QString getText() const;
    void setText(const QString &text);

    QString getTextColor() const;
    void setTextColor(const QString &textColor);

protected:
    void paint(QPainter *painter) override;

private:
    QString color = "#FF0000";
    QString text = "提示";
    QString textColor = "#000000";

signals:
    void colorChanged();
    void textChanged();
    void textColorChanged();
};

#endif // NOTICEBOARD_H
