#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    int b, g, r;

    // 입력
    cout << "Blue값(0~255)을 입력하시오: ";
    cin >> b;
    cout << "Green값(0~255)을 입력하시오: ";
    cin >> g;
    cout << "Red값(0~255)을 입력하시오: ";
    cin >> r;

    // Vec3b에 저장 (B, G, R 순서)
    Vec3b color(b, g, r);

    // 입력값 출력
    cout << "입력한 컬러값은 ["
        << (int)color[0] << ", "
        << (int)color[1] << ", "
        << (int)color[2] << "] 입니다." << endl;

    // 이미지 생성 및 색상 채우기
    Mat img(300, 300, CV_8UC3, color);

    // 화면 출력
    imshow("Color", img);

    waitKey(0);
    destroyAllWindows();

    return 0;
}