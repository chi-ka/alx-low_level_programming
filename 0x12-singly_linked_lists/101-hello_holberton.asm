section .data
    msg db "Hello Holberton", 0
    fmt db "%s", 10, 0

section .text
    global main
    extern printf
main:
    push rbp
    mov rdi, fmt
    mov rsi, msg
    mov rax, 0
    call printf
    pop rbp
    xor rax, rax  ; Set rax to 0 to indicate successful execution
    ret

