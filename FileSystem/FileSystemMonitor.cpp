#include "FileSystemMonitor.h"


void FileSystemMonitor::startWorking()
{
	cout<<"������� ������� �����! ��� ������������ ������ �������� ������� �� ��������� �������. "<<endl;
		cout<<"��� ����������� ������ � ���������� ������� ����� ������� �� ���������������"<<endl;
		
}


int FileSystemMonitor::showMenu()
{
	cout<<"1 - ������� ���������� ��� ����"<<endl;
	cout<<"2 - ������� ���������� �� ��������"<<endl;
	cout<<"3 - ������� ���������� � ������ ����� �� ����� � ��� ���������������"<<endl;
	cout<<"4 - ������� ����"<<endl;
	cout<<"5 - ������� ����"<<endl;
	cout<<"6 - ������������� ����"<<endl;
	cout<<"7 - �������� ���������� � ������������ ����"<<endl;
	cout<<"8 - ������ �������� �������"<<endl;
	cout<<"9 - ��������� ���� �����"<<endl;
	cout<<"10 - �������� ����� ���� � ���������"<<endl;
	cout<<"��� ��������� ���������� � ������� ���������� � ������ ������� ������� ����� ������� �� ������ <?>"<<endl;
	cout<<""<<endl;
	return(getch());
}


void FileSystemMonitor::workCycle()
{
	startWorking();
	for(;;)
	{
		int comandNumber=showMenu();
		if(comandNumber=='0') break;
	}
}