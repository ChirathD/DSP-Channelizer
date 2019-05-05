#include "cpp_FIR.h"


int main()
  {


//	float Input[1000] = {
//	#include "Input_signal.txt"
//	};

	acc_t mycomplex2 ;


    for (int i = 0; i <256; i++)
      {


    	mycomplex2= cpp_FIR(1,1);

        std::cout<<mycomplex2<< i<<endl;


      }

  return 0;
  }

