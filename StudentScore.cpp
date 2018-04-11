#include <iostream>
#include "Student.h"
using namespace std;

char selectMenu();

int main(int argc, char *args[]) {
	char ans;
	int count=0;
	Student student[10];	//�л�����ũ�⸦ 10���� ���� 
	
	for(int i=0;i<10;i++)
		student[i].setSN(0);	//�й��� ��� 0���� �ʱ�ȭ 
	
	do {
		switch(ans=selectMenu()) {
			case '1':	//�л� ���� �Է� 
				{					
					student[count].setData();
					count++;
					break;
				}
			
			case '2':	//�л����� �Է� 
				{
					cout<<"�й�\t\t���\t����\t�ܱ���"<<endl;
					for(int i=0;i<10;i++) {
						if(student[i].getSN()==0) break;	//�й��� 0�ΰ��� �����ϰ� ��� 
						else student[i].getData();
						
				}
					break;
				}
			case '3':
				{
					cout<<"�й�\t\t���"<<endl;
					for(int i=0;i<10;i++) {
						if(student[i].getSN()==0) break;	//�й��� 0�ΰ��� �����ϰ� ��� 
						else student[i].getAvg();
					}
					break;
				} 
			case 'q':	//���� 
				{
					
					cout<<"���α׷��� �����Ѵ�ϴ�."<<endl; 
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
	cout<<"�л����� ���� ���α׷�"<<endl;
	cout<<"----------------------\n";
	cout<<"1. �л����� �Է�\n";
	cout<<"2. �л����� ���\n";
	cout<<"3. ��� ���\n";
	cout<<"q. ����\n"; 
	cout<<"----------------------\n";
	
	cin>>menu; 
	return menu;
}

