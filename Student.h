#include <iostream>
#include <cstdlib>
class Student {
//C++������ private�� �⺻�������� ĸ��ȭ�Ǿ��ִ�. 
	int mSN;
	int mKor;
	int mMath;
	int mEng;
public:
//������ 
	int getSN();
	int getKor();
	int getMath();
	int getEng();
	void getData();

//������ 
	void setSN(int sSN);
	void setKor(int sKor);
	void setMath(int sMath);
	void setEng(int sEng);
	void setData();
		
	//��� ����ռ�
	void getAvg();
	
};

