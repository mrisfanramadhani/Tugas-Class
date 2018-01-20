#include <iostream>
#include <string>
using namespace std;

class MOTOR{
	public:
	void lokasi(string letak);
	string merk,nama;

};
int main(){
	
	MOTOR NINJA,CBR,THUNDER;
	
	NINJA.nama    ="Motor Ninja ";
	NINJA.merk = " Kawasaki ";
	CBR.nama       = "Motor CBR ";
	CBR.merk   = " Honda ";
	THUNDER.merk = " Suzuki ";


	cout << (NINJA.nama);
	cout << (NINJA.merk);
    NINJA.lokasi("DEALER");
    
    cout<< (CBR.nama);
    cout << (CBR.merk);
    CBR.lokasi("SHOWROOM");


}
void MOTOR::lokasi(string letak){
	cout<<"ada di "<<letak<<"!!"<<endl;
}

