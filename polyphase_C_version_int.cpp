#include<stdio.h>
#include<math.h>

void FilterBank(int X);
int conv(int subfilter_coeff[1000],int signal_buffer[1000]);

int filter_coeff_size=1000;
int channels=6;
int filter_coeff[1000],output[6] , count,buffer[1000],N;
int subfiltersize;



int main (){


	int i=0,j,a=1;
    int input_signal[16]={1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
    

    
    //reading filter coeff________________________
    FILE * fp;
	fp = fopen("coeff.txt", "r");
	
	while(a>0){
    a=fscanf(fp,"%d",&filter_coeff[i]);
    //printf("%d \n",filter_coeff[i]);
    N++;
 	i++;
 	}
 
	subfiltersize=ceil(N-1)/channels;
	
	//printf("%d \n",subfiltersize);
	
    fclose(fp);

	// initializing input buffer___________________
	
	for( j=0;j<1000;j++){
		
	buffer[j]=0;
    }	





	count=0;
	for(j=0;j<16;j++){
	//printf("count =%d \n",count);
	
	FilterBank(input_signal[j])	;
	if(count<channels-1){
		count=count+1;
		
	}
	
	else {
		count=0;
	}
		
		
		for(int i=0;i<channels;i++){
			
		printf("%d ",output[i]);
		}
		
		printf("\n");
	}
	
	
	return 0;
}






void FilterBank(int X){
	
	int Conv_Value;
	//int subfiltersize=2;
	int subfilter_coeff[1000],signal_buffer[1000];
	
	for(int i=1;i<subfiltersize;i++){
	
	buffer[subfiltersize*count+i]=	buffer[subfiltersize*count+i-1];
	
     }  
     
	buffer[subfiltersize*count]=X;
	
	for(int i=0;i<subfiltersize;i++){
		subfilter_coeff[i]=filter_coeff[channels*i+count];
		//printf("sub=%d \n",filter_coeff[channels*i+count]);
		signal_buffer[i]=buffer[subfiltersize*count+i];
	
	}
		//printf("subfilter coef =%d  %d %d \n",subfilter_coeff[0],subfilter_coeff[1],count);
		//printf("signal coef =   %d  %d \n",signal_buffer[0],signal_buffer[1]);
	Conv_Value=conv(subfilter_coeff,signal_buffer);
	output[count]=Conv_Value;
	
}  








int conv(int subfilter_coeff[1000],int signal_buffer[1000]){
	
	int c=0;
	
	
	for(int i=0;i<subfiltersize;i++){
		c=c+subfilter_coeff[i]*signal_buffer[i];
	}
	
	//printf("c value= %d",c);
	return c;
	
}

