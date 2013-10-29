#include "mainwindow.h"
#include <QApplication>
#include<cv.h>
#include<highgui.h>

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // Sample OpenCv code to test, put else where later
//    Mat image;
//    image = imread( "/home/prassanna/Desktop/image1.png");

//      if( !image.data )
//        {
//          printf( "No image data \n" );
//          return -1;
//        }

//      namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
//      imshow( "Display Image", image );

//      waitKey(0);

    w.show();
    
    return a.exec();
}
