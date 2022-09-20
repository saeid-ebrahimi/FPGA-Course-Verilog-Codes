`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:48 05/12/2017 
// Design Name: 
// Module Name:    HW3_1_C 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module HW3_1_B( clk , reset , I , O
    );
input clk ;
input reset ;
input I ;
output  O ;
parameter [2:0] S0=0 ;
parameter [2:0] S1=1 ;
parameter [2:0] S2=2 ;
parameter [2:0] S3=3 ;
parameter [2:0] S4=4 ;
reg temp ;
reg [2:0] PS , NS ;

	always @ (posedge clk )
	if(reset)
	PS <= S0 ;
	else 
	PS <= NS ;
always @ (PS , I)
		case ({PS , I})
			{S0,1'b0} : NS<=S0;
			{S0,1'b1} : NS<=S2;
			{S1,1'b0} : NS<=S0; 
			{S1,1'b1} : NS<=S2;
			{S2,1'b0} : NS<=S1;
			{S2,1'b1} : NS<=S3;
			{S3,1'b0} : NS<=S0;
			{S3,1'b1} : NS<=S4;
			{S4,1'b0} : NS<=S1;
			{S4,1'b1} : NS<=S0;
			default	 :	NS<=S0;
		endcase 
	always @ (PS , I)
		case ({PS , I})
			{S0,1'b0} : temp<=1'b0;
			{S0,1'b1} : temp<=1'b0;
			{S1,1'b0} : temp<=1'b0; 
			{S1,1'b1} : temp<=1'b0;
			{S2,1'b0} : temp<=1'b0;
			{S2,1'b1} : temp<=1'b0;
			{S3,1'b0} : temp<=1'b1;
			{S3,1'b1} : temp<=1'b0;
			{S4,1'b0} : temp<=1'b0;
			{S4,1'b1} : temp<=1'b1;
			default	 :	temp<=1'b0;
		endcase 
	assign O = temp ;
endmodule
