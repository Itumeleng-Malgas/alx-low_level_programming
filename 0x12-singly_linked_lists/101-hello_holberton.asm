section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    ; format string for printf
    mov rdi, hello

    ; call printf to print the string
    mov eax, 0
    call printf

    ; exit the program
    mov eax, 0
    ret

