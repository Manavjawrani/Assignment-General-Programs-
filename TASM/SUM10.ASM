.MODEL small
.STACK 100h
.DATA
    ARR db 03H,11H,17H,27H,34H,51H,53H,68H,70H
    sum db 0
  
.CODE
main proc
    mov ax, @data
    mov ds, ax
	
    mov cx,5
    mov ax,0
    mov bx, offset arr
	
    repeat:
    add al, [bx]
    inc bx
	dec cx
    jnz repeat
	
	mov sum,al
	mov dl,sum
    int 3  
main endp
end main
