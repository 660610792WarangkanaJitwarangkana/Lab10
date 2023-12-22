#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");

    string textline;
	cout << "-------------------- BOOM ---------------------\n";
	for(int i=0;i<9;i++){
	getline(source,textline);
	cout << textline << "\n";}
	cout << "-------------------- HA!! ---------------------\n";

    source.close();
    dest.close();
	return 0;
}
