#include<iostream>
using namespace std;
template<class T>
T maximum(T x,T y)
{
	return (x > y) ? x : y;
}
int main_1() {
	int i = 4, j = 8;
	char c = 'a', d = 'b';//ǿ��ת����a=97��b=98
	float f = 23.66;
	double g = 9999.1234;//������ʾ9999.12һ���˸����д99.123456����99.1235�ı�����������
	cout << "the max of i,j is" << maximum(i, j) << endl;
	cout << "the max of i,j is" << maximum(f, float(i)) << endl;
	cout << "the max of i,j is" << maximum<int>(i, c) << endl;
	cout << "the max of i,j is" << maximum<double>(g, d) << endl;
	return 0;
}