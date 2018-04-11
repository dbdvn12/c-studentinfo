#include <iostream>
#include <cstdlib>
class Student {
//C++에서는 private가 기본설정으로 캡슐화되어있다. 
	int mSN;
	int mKor;
	int mMath;
	int mEng;
public:
//접근자 
	int getSN();
	int getKor();
	int getMath();
	int getEng();
	void getData();

//설정자 
	void setSN(int sSN);
	void setKor(int sKor);
	void setMath(int sMath);
	void setEng(int sEng);
	void setData();
		
	//평균 계산합수
	void getAvg();
	
};

