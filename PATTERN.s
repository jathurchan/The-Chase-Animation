			AREA	PATTERN,CODE,READONLY
PATTERN_Display PROC
		EXPORT PATTERN_Display
		PRESERVE8
	
	PUSH	{R4, R5, LR}
	MOV R4, #0	; local variable: n
	MOV R5, R0	; entering parameter stored: pattern
	
	IMPORT DRAW_Init	; Initialization
	BL DRAW_Init
	IMPORT DRAW_Disp1LED

REP	MOV R0, R4
	MOV R1, R5
	AND R1, #1
	BL DRAW_Disp1LED
	LSR R5, R5, #1
	ADD R4, #1
	
	CMP R4, #10
FIN	BNE REP
		
	
	POP		{R4, R5, LR}
	
	BX LR	; Return

	ENDP
	ALIGN
	END