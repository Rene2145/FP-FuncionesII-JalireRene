#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int victoria=0, player;
	cout<<"JUGAREMOS PIEDRA, PAPEL O TIJERA"<<endl<<endl;
	cout<<"Haz tu jugada:"<<endl<<endl;
	cout<<"1 <- Piedra"<<endl;
	cout<<"2 <- Papel"<<endl;
	cout<<"3 <- Tijera"<<endl<<endl;
	do{
		int adversario = (rand() % 3) + 1;
		cout<<"¡Piedra, Papel o Tijera!"<<endl;
		switch(adversario){
			case 1:
				cin>>player;
				if(player==1){
					cout<<"Perdiste"<<endl<<endl;		
				}else if(player==2){
					cout<<"¡Empate!"<<endl<<endl;
				}else if(player==3){
					cout<<"¡Tu ganas!"<<endl<<endl;
					victoria=victoria+1;
				} else{
					cout<<"¡No realizaste una jugada valida! vuelve a escoger(1-3)"<<endl;
			    }
				break;
				
			case 2:
				cin>>player;
				if(player==1){
					cout<<"¡Empate!"<<endl<<endl;		
				}else if(player==2){
					cout<<"¡Tu ganas!"<<endl<<endl;
					victoria=victoria+1;
				}else if(player==3){
					cout<<"Perdiste"<<endl<<endl;
				} else{
					cout<<"¡No realizaste una jugada valida! vuelve a escoger(1-3)"<<endl;
				}
				break;
			case 3:
				cin>>player;
				if(player==1){
					cout<<"¡Tu ganas!"<<endl<<endl;
					victoria=victoria+1;	
				}else if(player==2){
					cout<<"Perdiste"<<endl<<endl;
				}else if(player==3){
					cout<<"¡Empate!"<<endl<<endl;
				} else{
					cout<<"¡No realizaste una jugada valida! vuelve a escoger(1-3)"<<endl<<endl;
				}
				break;
			default:
				cout<<"¡No realizaste una jugada valida! vuelve a escoger(1-3)"<<endl<<endl;
				break;
		}
	} while(victoria<3);
	cout<<"¡Felicidades!"<<endl<<"Lograste alsarte con la victoria, con "<<victoria<<" rondas ganadas."<<endl;
	return 0;
}
