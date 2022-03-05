data segment
no dw 5000h
z dw ?
o dw ?
data ends
 
code segment
assume cs:code, ds:data

start:
mov ax,data
mov ds,ax
mov ax,no
mov bx,00h      
mov cx,10h      
mov dx,00h      
up:
rol ax,1		
jc one		
inc bx		
jmp nxt
one:
inc dx		
nxt:
dec cx		
jnz up
mov z, bx		
mov o, dx		
int 3			
code ends
end start
