#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int runningtotal[14];
	for(int i=0; i<14; i++){runningtotal[i]=0;}

	int currentpower[14];
	for(int i=0; i<14; i++){currentpower[i]=0;}

	for(int i=1; i<1001; i++){
		for(int j=0; j<14; j++){currentpower[j]=0;}
		currentpower[0]=i%10;
		currentpower[1]=(i%100)/10;
		currentpower[2]=(i%1000)/100;
		currentpower[3]=i/1000;
		for(int j=1; j<i; j++){
			for(int k=0; k<10; k++){currentpower[k]=currentpower[k]*i;}
			for(int k=0; k<10; k++){
				currentpower[k+1]+=(currentpower[k]%100)/10;
				currentpower[k+2]+=(currentpower[k]%1000)/100;
				currentpower[k+3]+=currentpower[k]/1000;
				currentpower[k]=currentpower[k]%10;
			}
			currentpower[10]=0;
			currentpower[11]=0;
			currentpower[12]=0;
			currentpower[13]=0;
		}
		for(int j=0; j<10; j++){runningtotal[j]+=currentpower[j];}
		for(int k=0; k<10; k++){
			runningtotal[k+1]+=(runningtotal[k]%100)/10;
			runningtotal[k+2]+=(runningtotal[k]%1000)/100;
			runningtotal[k+3]+=runningtotal[k]/1000;
			runningtotal[k]=runningtotal[k]%10;
		}
		runningtotal[10]=0;
		runningtotal[11]=0;
		runningtotal[12]=0;
		runningtotal[13]=0;
	}

	for(int j=9; j>-1; j--){
		cout << runningtotal[j];
	}

	return 0;
}
