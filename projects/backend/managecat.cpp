#include <fstream>
#include <string>
#include <iostream>
using namespace std;
void printHeader(){
	cout<<"==============\n"
	      "  Manage Cat\n"
	      "==============\n\n";
	return;
}
void error(string message){
	cout<<"Ошибка: "<<message<<"\n";
	exit(1);
	return;
}
int main(){
	system("clear");
	printHeader();
	return 0;
}
