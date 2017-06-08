class Character
{
	public:
		bool life;
		char *CardUID;
		char job[30];
		char name[10];
		int level;
		int HP;
		int MaxHP;
		int MP;
		int MaxMP;
		int Strength;
		int Body;
		int Smart;
		int Perception;
		int Glamour;
		int Speed;
		int Magic;
		int CriticalPoint;
		int HelpAblity;
		int BattlePower;
		int CounterAttack;
		Character(char namein[],char jobin[]);
		Character(bool lifein,char *CardUIDin,char namein[],char jobin[],int levelin,int HPin,int MaxHPin,int MPin,int MaxMPin,int Strengthin,int Bodyin,int Smartin,int Perceptionin,int Glamourin,int Speedin,int Magicin,int CriticalPointin,int HelpAblityin,int BattlePowerin,int CounterAttackin);
		void Display();
		void Save();
		void FirstAbilityPointAdd();
};
Character::Character(char namein[],char jobin[])
{
	inputuid:
		CardUID=ReadUID();
	if(CardUID==0)
	{
		goto inputuid;
	}
	strcpy(name,namein);
	strcpy(job,jobin);
	life=true;
	level=1;
	HP=MaxHP=50;
	MP=MaxMP=50;
	Strength=0;
	Body=0;
	Smart=0;
	Perception=0;
	Glamour=0;
	Speed=0;
	Magic=0;
	CriticalPoint=0;
	HelpAblity=0;
	BattlePower=0;
	CounterAttack=0;
}
Character::Character(bool lifein,char *CardUIDin,char namein[],char jobin[],int levelin,int HPin,int MaxHPin,int MPin,int MaxMPin,int Strengthin,int Bodyin,int Smartin,int Perceptionin,int Glamourin,int Speedin,int Magicin,int CriticalPointin,int HelpAblityin,int BattlePowerin,int CounterAttackin)
{
	life=lifein;
	CardUID=CardUIDin;
	strcpy(name,namein);
	strcpy(job,jobin);
	level=levelin;
	HP=HPin;
	MaxHP=MaxHPin;
	MP=MPin;
	MaxMP=MaxMPin;
	Strength=Strengthin;
		Body=Bodyin;
		Smart=Smartin;
		Perception=Perceptionin;
		Glamour=Glamourin;
		Speed=Speedin;
		Magic=Magicin;
		CriticalPoint=CriticalPointin;
		HelpAblity=HelpAblityin;
		BattlePower=BattlePowerin;
		CounterAttack=CounterAttackin;
}
void Character::Save()
{
	char path[100]="Character/";
	strcat(path,CardUID);
	fstream save;
	save.open(path,ios::out|ios::trunc);
	save<<life<<" "<<CardUID<<" "<<name<<" "<<job<<" "<<level<<" "<<HP<<" "<<MaxHP<<" "<<MP<<" "<<MaxMP<<" "<<Strength<<" "<<Body<<" "<<Smart<<" "<<Perception<<" "<<Glamour<<" "<<Speed<<" "<<Magic<<" "<<CriticalPoint<<" "<<HelpAblity<<" "<<BattlePower<<" "<<CounterAttack;
	save.close();
}
void Character::Display()
{
			cout<<"角色名："<<name<<endl;
			cout<<"职业："<<job<<endl;
			cout<<"等级："<<level<<endl;
			cout<<"生命："<<HP<<"/"<<MaxHP<<endl;
			cout<<"法力："<<MP<<"/"<<MaxMP<<endl;
			cout<<"力量："<<Strength<<"	"<<"体质："<<Body<<"	"<<"敏捷："<<Speed<<endl;
			cout<<"智慧："<<Smart<<"	"<<"感知："<<Perception<<"	"<<"魅力："<<Glamour<<endl;
			cout<<"重击判定："<<CriticalPoint<<"	"<<"协助能力："<<HelpAblity<<endl;
			cout<<"战斗能量："<<BattlePower<<"	"<<"反击难度："<<CounterAttack<<endl;
}
void Character::FirstAbilityPointAdd()
{
    int i=22,a;
    while(i--)
    {
        cout<<"|======================================|"<<endl;
        cout<<"|      角色："<<name<<" 已经被建立     "<<endl;
        cout<<"|           职业为："<<job<<"          "<<endl;
        cout<<"|         获得了22个初始技能点         "<<endl;
        cout<<"|         想加在哪一项属性上?          "<<endl;
        cout<<"|       1：力量 2：敏捷 3：魔法        "<<endl;
        cout<<"|     4:智慧 5：体质 6：感知 7：魅力   "<<endl;
        cout<<"|    8:重击 9：协助 10：战斗 11：反击  "<<endl;
        cout<<"|======================================|"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
        {
            Strength+=1;
            cout<<"已在“力量”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 2:
        {
            Speed+=1;
            cout<<"已在“敏捷”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 3:
        {
            Magic+=1;
            cout<<"已在“魔法”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 4:
        {
            Smart+=1;
            cout<<"已在“智慧”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 5:
        {
            Body+=1;
            cout<<"已在“体质”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 6:
        {
            Perception+=1;
            cout<<"已在“感知”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 7:
        {
            Glamour+=1;
            cout<<"已在“魅力”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 8:
        {
            CriticalPoint+=1;
            cout<<"已在“重击”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 9:
        {
            HelpAblity+=1;
            cout<<"已在“协助”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 10:
        {
            BattlePower+=1;
            cout<<"已在“战斗”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        case 11:
        {
            CounterAttack+=1;
            cout<<"已在“反击”上增加了一个技能点，剩余技能点数："<<i<<endl;
            break;
        }
        default:
        cout<<"没有这个选项w请重新输入！"<<endl;
        }
    }
}
void CharacterCreate()
{
		char name[10],job[30];
		cout<<"目前本地存储中存在的角色数："<<endl;
		system("ls Character/ -l |grep '^-'|wc -l");
		cout<<"建立一个新的角色，请输入角色名（如果是误操作，输入exit退出）：";
		cin>>name;
		if(name[0]=='e'&&name[1]=='x'&&name[2]=='i'&&name[3]=='t')
			return;
		else
		{
			cout<<"请输入角色的职业：";
			cin>>job;
			Character p1(name,job);
			p1.FirstAbilityPointAdd();
			p1.Display();
			p1.Save();
		}
}

Character ReadIn(char *uid)
{
		bool lifein;
		char CardUIDin[28];
		char namein[10];
		char jobin[30];
		int levelin;
		int HPin;
		int MaxHPin;
		int MPin;
		int MaxMPin;
		int Strengthin;
		int Bodyin;
		int Smartin;
		int Perceptionin;
		int Glamourin;
		int Speedin;
		int Magicin;
		int CriticalPointin;
		int HelpAblityin;
		int BattlePowerin;
		int CounterAttackin;
	char prev[100]="ls Character/ | grep '";
	char next[30]="'  > cache";
	char read[100];
	strcat(prev,uid);
	strcat(prev,next);
	system(prev);
	ifstream readin;
	readin.open("cache");
	while(!readin.eof())
		readin>>read;
	readin.close();
	char path[100]="Character/";
	strcat(path,read);
	ifstream readchara;
	readchara.open(path);
	while(!readchara.eof())
	{
		readchara>>lifein>>CardUIDin>>namein>>jobin>>levelin>>HPin>>MaxHPin>>MPin>>MaxMPin>>Strengthin>>Bodyin>>Smartin>>Perceptionin>>Glamourin>>Speedin>>Magicin>>CriticalPointin>>HelpAblityin>>BattlePowerin>>CounterAttackin;
	}
	readchara.close();
	char *CardUIDin_p=CardUIDin;
	Character p(lifein,CardUIDin_p,namein,jobin,levelin,HPin,MaxHPin,MPin,MaxMPin,Strengthin,Bodyin,Smartin,Perceptionin,Glamourin,Speedin,Magicin,CriticalPointin,HelpAblityin,BattlePowerin,CounterAttackin);
	//p.Display();
	return p;
}
