#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Matrix.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	//1.��ʼ������ 3x3
	//1.1һά��������ά�����ʼ�� 
	double nums1[]={1,2,3,4,5,6,7,8,8};
	Matrix M1(nums1,3,3);
	//1.2��ά�����ʼ��
	double nums2[][3] ={{1,2,3},{4,5,6},{7,8,9}};
	Matrix M2(*nums2,3,3);
	//2.��������
	//2.1 �������
	Matrix MAdd=M1+M2;
	//2.2 �������
	Matrix MMul=M1*M2;
	//2.3 ����ת��
	Matrix MT=M1.Trans(); 
	//2.4 ��������
	Matrix MI=M1.Inverse();
	//3 ���
	cout<<"M1= "<<endl<<M1<<endl;
	cout<<"M2= "<<endl<<M2<<endl;
	cout<<"M1+M2= "<<endl<<MAdd<<endl;
	cout<<"M1T= "<<endl<<MT<<endl;
	cout<<"M1I= "<<endl<<MI<<endl; 
	system("pause");
	return 0;
}
