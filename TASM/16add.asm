data segment                                      
a dw 1234h                                              
b dw 5678h                                           
c dw ?		                                           
data ends                                             
code segment                                    
assume cs:code,ds:data                     
start:                                                     
mov ax,data
mov ds,ax
mov ax,a
mov bx,b
add ax,bx
mov cx,ax
int 3
code ends
end