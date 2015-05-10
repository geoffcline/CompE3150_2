// Increment code




Void Step(int pitch=65030;){
	
	while(!exit){
	if(increase==0 &&pitch<=65283){
	  pitch=pitch+58;
	  }
	 if(decrease==0 && pitch>=66176){
		pitch=pitch-58;
	 }
   spkr = ~spkr;
   delay1(pitch);
   spkr=~spkr;
	}
	return;
}

