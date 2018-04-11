#include <iostream>
#include "Student.h"
using namespace std;

char selectMenu();

int main(int argc, char *args[]) {
	char ans;
	int count=0;
	Student student[10];	//학생정보크기를 10으로 설정 
	
	for(int i=0;i<10;i++)
		student[i].setSN(0);	//학번을 모두 0으로 초기화 
	
	do {
		switch(ans=selectMenu()) {
			case '1':	//학생 정보 입력 
				{					
					student[count].setData();
					count++;
					break;
				}
			
			case '2':	//학생정보 입력 
				{
					cout<<"학번\t\t언어\t수리\t외국어"<<endl;
					for(int i=0;i<10;i++) {
						if(student[i].getSN()==0) break;	//학번이 0인것을 제외하고 출력 
						else student[i].getData();
						
				}
					break;
				}
			case '3':
				{
					cout<<"학번\t\t평균"<<endl;
					for(int i=0;i<10;i++) {
						if(student[i].getSN()==0) break;	//학번이 0인것을 제외하고 출력 
						else student[i].getAvg();
					}
					break;
				} 
			case 'q':	//종료 
				{
					
					cout<<"프로그램을 종료한답니다."<<endl; 
					break;
				}
			}
		
		system("PAUSE");
		system("cls");
	} while(ans!='q');
	
	return 0;
}

char selectMenu(){
	char menu;
	cout<<"학생정보 관리 프로그램"<<endl;
	cout<<"----------------------\n";
	cout<<"1. 학생정보 입력\n";
	cout<<"2. 학생정보 출력\n";
	cout<<"3. 평균 출력\n";
	cout<<"q. 종료\n"; 
	cout<<"----------------------\n";
	
	cin>>menu; 
	return menu;
}

