; Group 4 John Maverick Cisneros and Gabriel Villas
section .data
var1 dq 255.0
section .text
bits 64
default rel
global imgCvtGrayInttoFloat

imgCvtGrayInttoFloat:
	Movsd xmm1, [var1]
	divsd xmm0 , xmm1
	ret