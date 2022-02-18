data segment
n1 db 05h
n2 db 03h                                            
ans db ?            
data ends		                              
code segment
start : assume cs :code, ds :data
mov ax,data                             
mov ds,ax                                                 
mov al,n1
mov bl,n2
SUB al,bl
mov cl,al
mov ah, 4ch
int 21h
code ends
end start
