#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void printHeader(){
	cout<<"==============\n"
	      "  Atomic Bot\n"
	      "==============\n\n";
	return;
}
int main(){
	string msg;
	system("clear");
	printHeader();
	while(true){
		cout<<"Введите сообщение: ";
		getline(cin, msg);
		for(int i=0;i<msg.size();i++){
			msg[i]=tolower(msg[i]);
		}
		if(msg.find("привет")!=string::npos){
			cout<<"Привет, чем могу помочь?\n";
		}else if(msg.find("пока")!=string::npos){
			cout<<"Пока!\n";
			return 0;
		}else if(msg.find("atomic cats")!=string::npos){
			cout<<"Atomic Cats Security & Software - команда разработчиков, вот её состав:\n1. The Core Cat (C++, администрирование, сети).\n2. The Program Cat(Python).\n3. The Doc Cat(документация).\n4. The Bug Cat(Тесты).\n";
		}else{
			cout<<"Я не знаю ответ на запрос: "<<msg<<"\n";
		}
	}
	return 0;
}
