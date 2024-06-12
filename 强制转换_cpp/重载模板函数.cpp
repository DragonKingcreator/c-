#include<iostream>
using namespace std;
template<class T>
T maximum(T x, T y) {
	return (x > y) ? x : y;
}
char *maximum(char *x, char *y) {
	if (strcmp(x, y) > 0)
		return x;
	else 
		return y;
}
int main() {
	cout << "the max of 10,20 is:" <<maximum(10,20) << endl;
	cout << "the max of a,b is:" << maximum('a','b') << endl;
	cout << "the max of plane,circle is:" << maximum("plane", "circle") << endl;
	return 0;
}