#ifndef _CPP_FIR_H_
#define _CPP_FIR_H_

#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ap_fixed.h>
#include<math.h>
//#include <complex>
//#include <tuple>


using namespace std;

#define N 3328

//typedef float coef_t;
//typedef float data_t;
//typedef float acc_t;

typedef ap_fixed<23,2> coef_t;
typedef ap_fixed<20,15> data_t;
typedef ap_fixed<42,19> acc_t;

// Class CFir definition
template<class coef_T, class data_T, class acc_T>
class CFir {
protected:
  static const coef_T c[26][128];
  data_T shift_reg0[128][26];
  data_T shift_reg1[128][26];
  static const int SubFilterSize=26;
  static const int channels=128;
private:
public:
  //acc_T output2[128];
  //acc_T output1[128];
  //acc_T acc2;
  //acc_T acc3;
  int count;
  acc_T operator()(data_T x,data_T y);
  template<class coef_TT, class data_TT, class acc_TT>
  friend ostream&
  operator<<(ostream& o, const CFir<coef_TT, data_TT, acc_TT> &f);

};


// Load FIR coefficients
template<class coef_T, class data_T, class acc_T>
const coef_T CFir<coef_T, data_T, acc_T>::c[26][128] = {
	#include "cpp_FIR.inc"
};

// FIR main algorithm
template<class coef_T, class data_T, class acc_T>
acc_T CFir<coef_T, data_T, acc_T>::operator()(data_T x,data_T y) {
#pragma HLS INTERFACE s_axilite port=return

#pragma HLS RESOURCE variable=shift_reg0 core=RAM_2P_LUTRAM
#pragma HLS RESOURCE variable=shift_reg1 core=RAM_2P_BRAM
//#pragma HLS RESOURCE variable=c core=ROM_nP_BRAM
//#pragma HLS ARRAY_PARTITION variable=shift_reg0 complete dim=1
//#pragma HLS ARRAY_PARTITION variable=shift_reg1 complete dim=1
//#pragma HLS ARRAY_PARTITION variable=c complete dim=1
//#pragma HLS DATAFLOW
//#pragma HLS PIPELINE
//#pragma HLS ARRAY_RESHAPE variable=shift_reg cyclic factor=128 dim=1


    int i;
    acc_t acc1 = 0;
    acc_t acc4 = 0;
    acc_t acc2 = 0;
    acc_t acc3 = 0;




L1:	for(int i=0;i<SubFilterSize-1;i++){


		shift_reg0[count][SubFilterSize-1-i]=shift_reg0[count][SubFilterSize-2-i] ;
		acc2=acc2+c[SubFilterSize-1-i][count]*shift_reg0[count][SubFilterSize-1-i];

		shift_reg1[count][SubFilterSize-1-i]=shift_reg1[count][SubFilterSize-2-i] ;
		acc3=acc3+c[SubFilterSize-1-i][count]*shift_reg1[count][SubFilterSize-1-i];

	}

	shift_reg0[count][0]= x;
	shift_reg1[count][0]= y;
	acc1=acc2+c[0][count]*shift_reg0[count][0];
	acc4=acc3+c[0][count]*shift_reg1[count][0];


	//out[0]=acc1;
	//out[1]=acc4;


	if(count==channels-1){
		count=0;

	}

	else{
		count++;
	}


	//std::complex<acc_t> mycomplex (acc1,acc4);

	return acc1;


}



acc_t cpp_FIR(data_t x,data_t y);

#endif

