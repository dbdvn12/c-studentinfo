#include <iostream>
#include "Student.h"
using namespace std;

//������ 

int Student::getSN() {
	return mSN;
}
int Student::getKor() {
	return mKor;
}
int Student::getMath() {
	return mMath;
}
int Student::getEng() {
	return mEng;
}
void Student::getData() {	//�л������� ����ϴ� �Լ� 
	cout<<getSN()<<"\t"<<getKor()<<"\t"<<getMath()<<"\t"<<getEng()<<endl; 
}

//������ 

void Student::setSN(int sSN) {
	mSN=sSN;
}
void Student::setKor(int sKor) {
	mKor=sKor;
}
void Student::setMath(int sMath) {
	mMath=sMath;
}
void Student::setEng(int sEng) {
	mEng=sEng;
}
void Student::setData() {	//�л������� �Է¹޴� �Լ� 
	int sn=0,kor=0,math=0,eng=0;
	cout<<"�л������� �Է��ϼ���"<<endl;
	cout<<"�й�(10�ڸ�) ��� ���� �ܱ���"<<endl;
	cin>>sn>>kor>>math>>eng;
	setSN(sn);
	setKor(kor);
	setMath(math);
	setEng(eng);
}
//��� ����Ͽ� ����ϴ� �ռ�
void Student::getAvg() {	
	double avg=(mKor+mMath+mEng)/3.0;
	cout<<getSN()<<"\t\t"<<avg<<endl;
}
