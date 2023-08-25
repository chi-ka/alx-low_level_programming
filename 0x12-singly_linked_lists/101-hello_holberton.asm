section .data
    hello db "Hello, Holberton", 0
    newline db 10

section .text
    global main
    extern putchar

main:
    push rbp
    
    mov rsi, hello  ; Load the address of the hello string
.loop:
    mov al, byte [rsi]  ; Load the current byte of the string into AL
    cmp al, 0           ; Check if it's the null terminator
    je .print_newline    ; If null terminator, jump to print_newline
    call putchar        ; Call putchar to print the character
    inc rsi              ; Move to the next character
    jmp .loop            ; Repeat the loop
    
.print_newline:
    mov al, byte [newline]  ; Load the newline character
    call putchar          ; Call putchar to print the newline
    
    pop rbp
    ret

