#include <iostream>
#include "Student.h"
using namespace std;

//접근자 

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
void Student::getData() {	//학생정보를 출력하는 함수 
	cout<<getSN()<<"\t"<<getKor()<<"\t"<<getMath()<<"\t"<<getEng()<<endl; 
}

//설정자 

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
void Student::setData() {	//학생정보를 입력받는 함수 
	int sn=0,kor=0,math=0,eng=0;
	cout<<"학생정보를 입력하세요"<<endl;
	cout<<"학번(10자리) 언어 수리 외국어"<<endl;
	cin>>sn>>kor>>math>>eng;
	setSN(sn);
	setKor(kor);
	setMath(math);
	setEng(eng);
}
//평균 계산하여 출력하는 합수
void Student::getAvg() {	
	double avg=(mKor+mMath+mEng)/3.0;
	cout<<getSN()<<"\t\t"<<avg<<endl;
}
