#include "h/mainwindow.h"
#include "h/signin.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    SignIn mysignin;
//    mysignin.show();

//    Mat src = imread("C:/Users/Rimo/Code/untitled/Img/user.jpg",IMREAD_COLOR);
//    if (src.empty()) {
//            std::cout << "error!";
//            exit(0);
//        }
//    namedWindow("hello",WINT_MIN);
//    imshow("hello",src);

    return a.exec();
}
