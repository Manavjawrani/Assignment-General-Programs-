.model small
assume cs: code, ds: data

data segment
num_b db 30h
num_c db 20h
num_d db 08h
num_e db 05h
data ends

code segment
start:
mov 	ax, data
mov 	ds, ax
mov 	ax, 0000h
mov 	bx, 0000h
xor 	cx, cx
xor 	dx,dx
mov 	al, num_b
mov 	bl, num_c
add 	al, bl
mov 	cx, ax
mov 	al, num_d
mov 	dl, num_e
mul 	dl
sub 	al, cl
int 	03h
code 	ends
end start
