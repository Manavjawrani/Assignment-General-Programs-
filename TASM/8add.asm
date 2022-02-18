.model small
.data
n1 db 10h
n2 db 22h

sum db ?
carry db 00h
.code
start: mov ax, @data
       mov ds,ax
mov al, n1
add al, n2
jnc skip
mov carry, 01h
skip: mov sum, al 
mov ah,4ch
int 21h
end start
end code
end
