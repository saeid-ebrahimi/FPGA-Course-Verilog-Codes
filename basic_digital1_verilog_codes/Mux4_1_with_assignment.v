module MUX (a,b,o,s);
	input [3:0] a;
	input [1:0]s;
	output reg o;
	/*assign o=((s[1]==0 && s[0]==0))? a[0]:
			 ((s[1]==0 && s[0]==1))? a[1]:
			 ((s[1]==1)&& s[0]==0)) ? a[2]:
			 ((s[1]==1)&& s[0]==1))? a[3];
			 */
	/* assign o=(!s[1] && !s[0])? a[0]:
			 (!s[1] && s[0]))? a[1]:
			 (s[1]&& !s[0]) ? a[2]:
			 (s[1]&& s[0])? a[3];		 
	*/
	/*assign o=({s[1],s[0]}==0 )? a[0]:
			 ({s[1],s[0]}==1)? a[1]:
			 ({s[1],s[0]}==2 ? a[2]:a[3];	
	*/
	
	
	 
endmodule