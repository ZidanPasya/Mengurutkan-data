#include <iostream>
using namespace std;

int main(){
	int angka[6] = {2, 8, 5, 17, 14, 11};
	bool tukar;
    int pindah;
	
	do{
		tukar = false;
		for(int i=0; i<6; i++){
			if(angka[i] > angka[i+1]){
				pindah = angka[i];
				angka[i] = angka[i+1];
				angka[i+1] = pindah;
				tukar = true;
			}
		}
	}while(tukar);
	
	for(int j=0; j<6; j++){
		cout << angka[j] << " ";
	}
}
