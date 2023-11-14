#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
	float LuasLingkaran, JariJari;
	
	cout<<"\n === Program Luas Lingkaran === \n\n";
	cout<<"masukan nilai jari jari: ";
	cin>>JariJari;
	
	LuasLingkaran = PI * JariJari * JariJari;
	cout<<"LuasLingkaran "<<LuasLingkaran<<endl;
	
	return 0;
}
