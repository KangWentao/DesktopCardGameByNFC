#include"uidread.h"
#include"CharacterIO.h"
#include"Battle.h"
int rand(int a)
{
	srand(time(0));
	return rand()%a;
}
int main()
{
	char command;
		while(1)
		{
		cout<<"|----------------------------------------"<<endl;
		cout<<"| NFC桌面游戏战斗控制台       "<<endl;
		cout<<"|   Ver:alpha-0.0.4   "<<endl;
		cout<<"|   选择你的操作                      "<<endl;
		cout<<"|1，创建新的角色卡片                "<<endl;
		cout<<"|2，查看卡片中的角色信息"<<endl;
		cout<<"|3，开始一场战斗                         "<<endl;
		cout<<"|0，退出游戏                                "<<endl;
		cout<<"|----------------------------------------"<<endl;
		cout<<"DeskTopGame>_ ";
		cin>>command;
		if(command=='1')
			CharacterCreate();
		else
		if(command=='2')
		{
			char *uid;
			cout<<"请准备好要查看的NFC角色卡片"<<endl;
			readuid:
			uid=ReadUID();
			if(uid==0)
				goto readuid;
			Character p1=ReadIn(uid);
			p1.Display();
		}
		else
		if(command=='3')
		{
			char *uid;
			cout<<"请准备好要参加本次战斗的NFC角色卡片"<<endl;
			readuidinbattle:
			uid=ReadUID();
			if(uid==0)
				goto readuidinbattle;
			Character p1=ReadIn(uid);
			Battler b1(p1);
			b1.Display();
		}
		else
		if(command=='0')
			exit(0);
		}
		return 0;
}
