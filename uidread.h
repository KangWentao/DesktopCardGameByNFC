#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<cstring>
using namespace std;
char uid[48];
char* ReadUID()
{
	char i;
	cout<<"请将NFC卡片放在读取器上，输入任意一个字符继续"<<endl;
	while(cin>>i)
	{
		char uidpart[2],board[48];
		memset(board,'\0',sizeof(board));
		system("nfc-list > nfcreadin.txt");
		system("grep 'UID' nfcreadin.txt > uid.txt");
		ifstream txtfile;
		txtfile.open("uid.txt");
		while(!txtfile.eof())
		{
			txtfile>>uidpart;
			strcat(board,uidpart);
		}
		txtfile.close();
		if(board[0]!='U')
		{
			cout<<"读卡失败，请重新刷卡。"<<endl;
			return 0;
		}
		else
		{
			strcpy(uid,board);
			return uid;
		}
	}
	return 0;
}
