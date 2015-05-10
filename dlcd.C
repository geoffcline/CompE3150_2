#include "gfcts.h"
 
void NoteName(char Name){

	 outenable = 1; // Output Enable
	 ap = 0;//a 
	 bp = 0;//b
	 cp = 0;//c
	 dp = 0;//d
	 ep = 0;//e
	 fp = 0;//f
	 gp = 0;//g
	if(Name=='1'){ // C
	  ap = 1;//a
	  fp = 1;//f
	  ep = 1;//e
	  dp = 1;//d
	}
	
	if(Name=='2'){ // D
	  bp = 1;//b
	  cp = 1;//c
	  dp = 1;//d
	  ep = 1;//e
	  gp = 1;//g
	}

	if(Name=='3'){ // E
		ap = 1;//a
		fp = 1;//f
		gp = 1;//g
		ep = 1;//e
		dp = 1;//d
	}
	if(Name=='4'){ // F
		ap = 1;//a
		ep = 1;//e
		gp = 1;//g
		fp = 1;//f
	}
	if(Name=='5'){ // G
		ap = 1;//f
		bp = 1;//f
		gp = 1;//f
		fp = 1;//f
		cp = 1;//f
		dp = 1;//f

	}
}