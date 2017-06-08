class Battler
{
	public:
		Character *player;
		Battler(Character p);
		void Display();
		void HPDamage(int x);
		void MPExpend(int x);
};
Battler::Battler(Character p)
{
	player=&p;
}
void Battler::Display()
{
	int command;
	cout<<player->name<<" "<<"的回合"<<endl;
	cout<<"你要怎么做？"<<endl;
	cout<<"1：攻击	2：防御"<<endl;
	cout<<"DeskTopGame>_";
	cin>>command;
}
