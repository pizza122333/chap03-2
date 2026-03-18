# chap03-2

(1)
🧠 코드 설명
1. 변수 선언 및 입력
int b, g, r;

cout << "Blue값(0~255)을 입력하시오: ";
cin >> b;
cout << "Green값(0~255)을 입력하시오: ";
cin >> g;
cout << "Red값(0~255)을 입력하시오: ";
cin >> r;

사용자로부터 Blue, Green, Red 값을 각각 입력받는다.

2. Vec3b 객체 생성
Vec3b color(b, g, r);

Vec3b는 3개의 unsigned char 값을 저장하는 클래스이다.

OpenCV는 색상을 BGR 순서로 저장하므로 (b, g, r) 순서로 넣는다.

3. 입력값 출력
cout << "입력한 컬러값은 ["
     << (int)color[0] << ", "
     << (int)color[1] << ", "
     << (int)color[2] << "] 입니다." << endl;

color[0], color[1], color[2]는 각각 B, G, R 값을 의미한다.

Vec3b는 uchar 타입이므로 정수 출력 시 (int) 형변환을 해준다.

4. 이미지 생성 및 색상 적용
Mat img(300, 300, CV_8UC3, color);

300x300 크기의 이미지 생성

CV_8UC3:

8비트 unsigned

3채널(B, G, R)

color 값을 이용해 이미지 전체를 동일한 색으로 채운다.

5. 이미지 출력
imshow("Color", img);
waitKey(0);
destroyAllWindows();

imshow()로 이미지 창을 출력한다.

waitKey(0)은 키 입력을 기다린다.

destroyAllWindows()는 모든 창을 종료한다.

🖥️ 실행 결과
📥 입력
Blue값(0~255)을 입력하시오: 255
Green값(0~255)을 입력하시오: 0
Red값(0~255)을 입력하시오: 255
📤 출력
입력한 컬러값은 [255, 0, 255] 입니다.
🖼️ 결과 화면

보라색(마젠타) 색상의 이미지 창이 출력됨



(2)
🧠 코드 설명
1. 변수 선언 및 입력
int b, g, r;

cout << "Blue값(0~255)을 입력하시오: ";
cin >> b;
cout << "Green값(0~255)을 입력하시오: ";
cin >> g;
cout << "Red값(0~255)을 입력하시오: ";
cin >> r;

사용자로부터 B, G, R 값을 입력받는다.

2. Scalar 객체 생성
Scalar color(b, g, r, 0);

Scalar는 4개의 값을 저장하는 클래스 (B, G, R, Alpha)

Alpha 값은 사용하지 않으므로 0으로 설정

3. 입력값 출력
cout << "입력한 컬러값은 ["
     << color[0] << ", "
     << color[1] << ", "
     << color[2] << ", "
     << color[3] << "] 입니다." << endl;

입력된 색상 값을 배열 형태로 출력

4. 이미지 생성 및 색상 적용
Mat img(300, 300, CV_8UC3, color);

300x300 크기의 이미지 생성

CV_8UC3 : 8비트, 3채널(BGR)

color로 전체 픽셀을 채움

5. 이미지 출력
imshow("Color", img);
waitKey(0);
destroyAllWindows();

imshow()로 이미지 창 출력

키 입력 시 종료

🖥️ 실행 결과
📥 입력
Blue값(0~255)을 입력하시오: 255
Green값(0~255)을 입력하시오: 0
Red값(0~255)을 입력하시오: 255
📤 출력
입력한 컬러값은 [255, 0, 255, 0] 입니다.
🖼️ 결과 화면

보라색(마젠타) 색상의 이미지 창이 출력됨

📌 참고 사항

OpenCV는 RGB가 아닌 BGR 순서를 사용한다.

Scalar는 내부적으로 double 타입을 사용한다.

Alpha 값은 투명도를 의미하지만 본 프로그램에서는 사용하지 않는다.
