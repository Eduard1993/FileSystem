#include "FileSystemMonitor.h"


void FileSystemMonitor::startWorking()
{
	cout<<"������� ������� �����! ��� ������������ ������ �������� ������� �� ��������� �������. "<<endl;
		cout<<"��� ����������� ������ � ���������� ������� ����� ������� �� ��������������� ����"<<endl<<endl;
		
}


int FileSystemMonitor::showMenu()
{
	cout<<endl;
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
	cout<<"0 - ���������� ������ � ����������"<<endl;
	cout<<"������� ����� �������"<<endl;
	int comandNumber;
	cin>>comandNumber;
	cout<<endl;
	return(comandNumber);
}

void FileSystemMonitor::showHelp()
{
	cout<<"������� � �������� �������� �������"<<endl;
	cout<<"1 - ������� ������� ���������� ��� ����������"<<endl;
	cout<<"2 - ������� ������� ���������� ��������������� �� ��������"<<endl;
	cout<<"3 - ������� ������� ���������� � ������ ����� �� �����"<<endl;
	cout<<"4 - ������� ������ ����� ���� � ��������� ����������������"<<endl;
	cout<<"5 - ������� ������� ���� �������� ������"<<endl;
	cout<<"6 - ������� �������� ��� ������������� ����� �� �����"<<endl;
	cout<<"7 - ������� ��������� ���������� � ��� ������������ ����"<<endl;
	cout<<"8 - ������� ������������ �������������� �����"<<endl;
	cout<<"9 - ������� �������� ��� ������������� �����"<<endl;
	cout<<"10 - � ������� ������ ������� ���������� ����� ���� � �������� �������� �������"<<endl;
	cout<<"11 - ��������� ������ ������ ������� �� ������ ����"<<endl<<endl<<endl;
}

void FileSystemMonitor::showTableOfContents()
{
	cout<<"��������� ����������"<<endl;
}

void FileSystemMonitor::showTableInAlphavit()
{
	cout<<"��������� ���������� �� ��������"<<endl;
}

void FileSystemMonitor::createNewFile()
{
	string fileName;
	cout<<"������� ��� �����"<<endl;
	cin>>fileName;
	string fileType;
	cout<<"������� ��� �����"<<endl;
	cin>>fileType;
	string fileSize;
	cout<<"������� ������ ����� � ������"<<endl;
	cin>>fileSize;
	char creationDate[16];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	char* format = "%B %d, %Y";
	strftime(creationDate, 16, format, timeinfo);
	cout<<endl<<"���� �������� �����: "<<creationDate<<endl;
	
	cout<<"������ ����"<<endl;
}

void FileSystemMonitor::showInformation()
{
	cout<<"��������� ���������� � ������ ����� �� �����"<<endl;
}

void FileSystemMonitor::deleteFile()
{
	cout<<"������� ��� ������� �����"<<endl;
	string fileName;
	cin>>fileName;
	cout<<"������ ����"<<endl;
}

void FileSystemMonitor::reNameFile()
{
	cout<<"������� ��� ������� �����"<<endl;
	string fileName;
	cin>>fileName;
	cout<<"������� ����� �����"<<endl;
	string newFileName;
	cin>>newFileName;
	cout<<"�������������� ����"<<endl;
}

void FileSystemMonitor::addInformationToFile()
{
	cout<<"������� ��� ������� �����"<<endl;
	string fileName;
	cin>>fileName;
	cout<<"�������� ���������� � ����"<<endl;
}

void FileSystemMonitor::compressionOfFileSystem()
{
	cout<<"������ �������� �������"<<endl;
}

void FileSystemMonitor::changeFileType()
{
	cout<<"������� ��� ������� �����"<<endl;
	string fileName;
	cin>>fileName;
	cout<<"������� ����� ��� �����"<<endl;
	string fileType;
	cin>>fileType;
	cout<<"����� ��� �����"<<endl;
}

void FileSystemMonitor::writeVolumeLabelAndOwner()
{
	cout<<"����� ����� ���� � ���������"<<endl;
}

void FileSystemMonitor::workCycle()
{
	startWorking();
	cout<<"���� �� ������ �������� � ��� ������������ ������ ������ 1"<<endl;
	cout<<"���� �� ������ ������� ����� ���� ������� 2"<<endl;
	int startType;
	cin>>startType;
	while((startType!=1)&&(startType!=2))
	{
		cout<<"������������ ����. ������� 1 ��� 2"<<endl;
		cin>>startType;
	};
	if(startType==2)
	{
		cout<<"������� ��� ����� ��� ���������� �������� �������"<<endl;
		string fileSystemName;
		cin>>fileSystemName;
		fileSystem.createFile(fileSystemName);
		string version;
		cout<<"print version"<<endl;
		cin>>version;
		string tomName;
		cout<<"print tomName"<<endl;
		cin>>tomName;
		string userName;
		cout<<"print userName"<<endl;
		cin>>userName;
		string systemName;
		cout<<"print systemName"<<endl;
		cin>>systemName;
		this->fileSystem.format(version, tomName, userName, systemName);
	};
	if(startType==1)
	{
		cout<<"������� ��� ������������� ����� "<<endl;
		string fileSystemName;
		cin>>fileSystemName;
		fileSystem.openFile(fileSystemName);
	};
	for(;;)
	{
		cout<<endl;
		int comandNumber=showMenu();
		int resultCode=0;
		if(comandNumber==0) break;
		if(comandNumber==1){ showTableOfContents(); resultCode=1;};
		if(comandNumber==2){ showTableInAlphavit(); resultCode=1;};
		if(comandNumber==3){ showInformation(); resultCode=1;};
		if(comandNumber==4){ createNewFile(); resultCode=1;};
		if(comandNumber==5){ deleteFile(); resultCode=1;};
		if(comandNumber==6){ reNameFile(); resultCode=1;};
		if(comandNumber==7){ addInformationToFile(); resultCode=1;};
		if(comandNumber==8){ compressionOfFileSystem(); resultCode=1;};
		if(comandNumber==9){ changeFileType(); resultCode=1;};
		if(comandNumber==10){ writeVolumeLabelAndOwner(); resultCode=1;};
		if(comandNumber==11){ showHelp(); resultCode=1; this->fileSystem.closeFileSystem(); };
		if(!resultCode) cout<<"������������ ������� ��������. ��������� ����"<<endl;
	}
}


