#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;
	
	float In_complex[10000] = {
	#include "InputComplex.txt"
	};	
	
		
	float In_real[10000] = {
	#include "InputReal.txt"
	};	
	


//global Variables
int count;
int SubFilterSize=26;
int channels=128; 
float Buffer[4000];
float out_real[128];
float out_imag[128];
float shift_reg0[128][26];
float shift_reg1[128][26];
//float c[26][128];

	float c[128][26] = {
	#include "FilterCoeff.txt"
	};	

void FilterBank(float x,float y);
int Conv(float SubfilterCoeff[2000],float SignalBuffer[2000]);


int main(){
	
	int j;
	std::ofstream ofs("OutputReal.txt");

	
	count=0;
	
	
	for(int i=0;i<10000;i++){
		
	FilterBank(InComplex[i],InReal[i]);
	if (count ==0){
		
		for(int j=0;j<channels;j++){
			cout <<" "<< out_imag[j]<<" "<<out_imag[j]<<"\n"<<endl;
			ofs <<out_real[j] << std::endl;
								
		}
		
	}

	
	
	}

	
	return 0;
}



// FIR main algorithm 

void FilterBank(float x,float y){

    int i;
    float acc1 = 0;
    float acc4 = 0;
    float acc2 = 0;
    float acc3 = 0;

	for(int i=0;i<SubFilterSize-1;i++){


		shift_reg0[count][SubFilterSize-1-i]=shift_reg0[count][SubFilterSize-2-i] ;
		acc2=acc2+c[SubFilterSize-1-i][count]*shift_reg0[count][SubFilterSize-1-i];

		shift_reg1[count][SubFilterSize-1-i]=shift_reg1[count][SubFilterSize-2-i] ;
		acc3=acc3+c[SubFilterSize-1-i][count]*shift_reg1[count][SubFilterSize-1-i];

	}

	shift_reg0[count][0]= x;
	shift_reg1[count][0]= y;
	acc1=acc2+c[0][count]*shift_reg0[count][0];
	acc4=acc3+c[0][count]*shift_reg1[count][0];


	out_real[count]=acc1;
	out_imag[count]=acc4;

	if(count==channels-1){
		count=0;

	}
	else{
		count++;
	}



}

