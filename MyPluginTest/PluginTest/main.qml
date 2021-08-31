import QtQuick 2.12
import QtQuick.Window 2.12
import MyPlugin 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MyItem{
        id: myItem
    }

    NoticeBoard{
        id: noticeBoard
        width: 200
        height: 200
        color: "#efefd0"
        text: "提示"
        textColor: "#747ae4"
    }
}
