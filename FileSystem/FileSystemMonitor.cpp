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
	cout<<"11 - �������� ������� �� �������� �������� �������"<<endl;
	cout<<"��� ��������� ���������� � ������� ���������� � ������ ������� ������� ����� ������� �� ������ <?>"<<endl;
	cout<<"������� ����� �������"<<endl;
	int comandNumber;
	cin>>comandNumber;
	return(comandNumber);
}

void FileSystemMonitor::showHelp()
{
	cout<<"������� � �������� �������� �������"<<endl;
	cout<<"1 - ������� ���������� ��� ���� <����� ����� �������>"<<endl;
	cout<<"2 - ������� ���������� �� �������� <����� ����� �������>"<<endl;
	cout<<"3 - ������� ���������� � ������ ����� �� ����� � ��� ��������������� <����� ����� �������>"<<endl;
	cout<<"4 - ������� ���� <����� ����� �������>"<<endl;
	cout<<"5 - ������� ���� <����� ����� �������>"<<endl;
	cout<<"6 - ������������� ���� <����� ����� �������>"<<endl;
	cout<<"7 - �������� ���������� � ������������ ���� <����� ����� �������>"<<endl;
	cout<<"8 - ������ �������� ������� <����� ����� �������>"<<endl;
	cout<<"9 - ��������� ���� ����� <����� ����� �������>"<<endl;
	cout<<"10 - �������� ����� ���� � ��������� <����� ����� �������>"<<endl;
	cout<<"11 - �������� ������� �� �������� �������� ������� <����� ����� �������>"<<endl<<endl<<endl;
}

void FileSystemMonitor::showTableOfContents()
{

}

void FileSystemMonitor::showTableInAlphavit()
{

}

void FileSystemMonitor::createNewFile()
{

}

void FileSystemMonitor::showInformation()
{

}

void FileSystemMonitor::deleteFile()
{

}

void FileSystemMonitor::reNameFile()
{

}

void FileSystemMonitor::addInformationToFile()
{

}

void FileSystemMonitor::compressionOfFileSystem()
{

}

void FileSystemMonitor::changeFileType()
{

}

void FileSystemMonitor::writeVolumeLabelAndOwner()
{

}

void FileSystemMonitor::workCycle()
{
	startWorking();
	for(;;)
	{
		int comandNumber=showMenu();
		if(comandNumber==0) break;
		if(comandNumber==1) showTableOfContents();
		if(comandNumber==2) showTableInAlphavit();
		if(comandNumber==3) showInformation();
		if(comandNumber==4) createNewFile();
		if(comandNumber==5) deleteFile();
		if(comandNumber==6) reNameFile();
		if(comandNumber==7) addInformationToFile();
		if(comandNumber==8) compressionOfFileSystem();
		if(comandNumber==9) changeFileType();
		if(comandNumber==10) writeVolumeLabelAndOwner();
		if(comandNumber==11) showHelp();
	}
}