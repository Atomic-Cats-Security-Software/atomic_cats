#include <iostream>
using namespace std;
class Player{ // игрок
	public:
		int a=0; // блокировка двух блокирований подряд у игрока
		int hp=100; // здоровье
		int choise; // выбор
		void info(){
			cout<<"HP: "<<hp<<"\n";
			return;
		}
		void takeDamage(){
			hp-=20;
			return;
		}
};
class Enemy{ // враг
	public:
		int a=0; // блокировка двух блокирований подряд у врага
		int hp=100; // здоровье
		int choise; // выбор
		void info(){
			cout<<"HP: "<<hp<<"\n";
			return;
		}
		void takeDamage(){
			hp-=20;
			return;
		}
		void AI(){
			if(hp<=40){
				choise=2;
			}
			if(a%2!=0||hp>40){
				choise=1;
			}
			return;
		}
};
int main(){
	Player player;
	Enemy enemy;
	cout<<"Выберите:\n1.Атака\n2.Блокирование\n";
	while(true){
		cin>>player.choise;
		enemy.AI();
		if(player.choise==1){
			enemy.takeDamage();
			if(enemy.choise==2){
				if(enemy.a%2==0){
					enemy.hp+=20;
				}
				enemy.a++;
			}
		}else if(enemy.choise==1){
			player.takeDamage();
			if(player.choise==2){
				if(player.a%2==0){
					player.hp+=20;
				}else{
					cout<<"Нельзя блокировать два хода подряд.\n";
				}
				player.a++;
			}
		}
		if(player.hp<=0){
			cout<<"Вы проиграли!";
			return 0;
		}else if(enemy.hp<=0){
			cout<<"Вы выиграли!";
			return 0;
		}else{
			cout<<"Ваше HP: "<<player.hp<<"\n";
			cout<<"HP противника: "<<enemy.hp<<"\n";
		}
	}
	return 0;
}
