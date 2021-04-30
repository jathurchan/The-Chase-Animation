			AREA	TEST,CODE,READONLY
TEST04 PROC
			EXPORT	TEST04 ; to export the label
			PRESERVE8
	
		IMPORT DRAW_Init
		BL DRAW_Init
		
		IMPORT DRAW_Disp1LED
		mov R0, #0
		mov R1, #1
		BL DRAW_Disp1LED
		mov R0, #9
		mov R1, #0
		BL DRAW_Disp1LED
		
		mov R0, #1
TheEND B TheEND
	ENDP
	ALIGN
	END