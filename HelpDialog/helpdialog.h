#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>
#include <QGridLayout>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QDesktopWidget>

class HelpDialog: QDialog
{
    Q_OBJECT
public:
    HelpDialog(QWidget *parent = 0) : QDialog(parent) {
        hd = new QDialog() ;
        hd->setMinimumSize(500, 500);
        hd->setMaximumSize(500, 500);
        QVBoxLayout *layout = new QVBoxLayout();
        QTextBrowser *tb = new QTextBrowser();
        layout->addWidget(tb);
        QString text = "";
        text = text + R"(<strong><span style="font-size:16px;">基本模式</span></strong><br />
                基本模式是“欢乐连连看”游戏的基本模式，包含游戏的基本功能：开始游戏、暂停游戏、提示、重排、计时。<br />
                <strong>1、开始游戏</strong><br />
                当第一次进入游戏或者完成一局游戏后，点击开始游戏可以生成游戏地图，进行连连看游戏，在游戏地图中用鼠标左键点击任意位置的两张图片，选中图片后，图片的显示效果会变成被按下去的样子，并判断是否能消子。<br />
                <strong>2、暂停游戏</strong><br />
                当游戏开始后，可以点击“暂停”按钮，将游戏暂停。暂停游戏后，可以点击“继续游戏”按钮，继续游戏。<br />
                <strong>3、提示</strong><br />
                当游戏开始后，可以点击“提示”按钮，将在游戏地图中，用红色虚线连接一对可以消除的图片。<br />
                <strong>4、重排</strong><br />
                游戏开始后，可以点击“重排”按钮，将游戏地图中，剩余的位置的图片重新排列。<br />
                <br />
                <span style="color:#999999;">Created by 程厚森 on 16/05/24</span><br />
                <span style="color:#999999;">Copyright &copy; 2016年 whut0121410870523. All rights reserved.</span><br />
                <br />)";

        tb->setHtml(text);
        hd->setLayout(layout);
    }

    void showHelpDialog();

private:
    QDialog *hd;

};

#endif // HELPDIALOG_H
