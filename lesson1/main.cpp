#include <iostream>
using namespace std;


class Point3d {
public:
	//Point3d(float x, float y, float z);
	// ���캯����ʹ�ó�ʼ���б��ʼ����Ա����
	Point3d(float x_val, float y_val, float z_val)
		: x(x_val), y(y_val), z(z_val) {}
	void print() {
		cout << "Point3d(" << x << ", " << y << ", " << z << ")" << endl;
	};
private:
	float x;
	float y;
	float z;
};

int main() {
	cout << "hello world!! today is 2024/10/15" << endl;

	Point3d a(1.0f, 2.0f, 3.0f);
	a.print();

	int age;
	cin >> age;
	cout << "you are  " << age << endl;

	return 0;
}