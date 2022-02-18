data segment                                      
a dw 5678h                                              
b dw 1234h                                           
c dw ?		                                           
data ends                                             
code segment                                    
assume cs:code,ds:data                     
start:                                                     
mov ax,data
mov ds,ax
mov ax,a
mov bx,b
sub ax,bx
mov cx,ax
int 3
code ends
end