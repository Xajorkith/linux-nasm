;name: pyfunctions.asm
;
;build: release version:
;           nasm -felf64 -o pyfunctions.o pyfunctions.asm
;           ld -lc --dynamic-linker /lib64/ld-linux-x86-64.so.2 -shared -soname pyfunctions.so -o pyfunctions.so.1.0 pyfunctions.o -R .
;           ln -sf pyfunctions.so.1.0 pyfunctions.so
;       debug/development version
;           nasm -felf64 -Fdwarf -g -o sharedlib-dev.o sharedlib.asm
;           ld -lc --dynamic-linker /lib64/ld-linux-x86-64.so.2 -shared -soname sharedlib-dev.so -o sharedlib-dev.so.1.0 sharedlib-dev.o -R .
;           ln -sf sharedlib-dev.so.1.0 sharedlib-dev.so
;
;description: A "simple" shared library to use with hello.asm

bits 64

[list -]
    %include "unistd.inc"
[list +]
  
; five macros to make life a bit easier
; each global function/method/routine (whatever you call it) must start with the PROLOGUE
%macro _prologue 0
    push    rbp
    mov     rbp,rsp 
    push    rbx 
    call    .get_GOT 
.get_GOT: 
    pop     rbx 
    add     rbx,_GLOBAL_OFFSET_TABLE_+$$-.get_GOT wrt ..gotpc 
%endmacro

; each global function/method/routine (whatever you call it) must end with the EPILOGUE
%macro _epilogue 0
    mov     rbx,[rbp-8] 
    mov     rsp,rbp 
    pop     rbp 
    ret
%endmacro

; macro to initiate and export the global procedure while defining it as a PROCEDURE
; doing so it's harder to forget to export it
%macro _proc 1
    global  %1:function
    %1:
    _prologue
%endmacro

; macro to end the procedure
%macro _endp 0
    _epilogue
%endmacro    

; self defined macro to declare global data and export it the same time
%macro _globaldata 3
    global  %1:data (%1.end - %1)
    section .data
        %1:    %2    %3
        %1.end:
%endmacro

extern  _GLOBAL_OFFSET_TABLE_

;global functions
global  square:function


section .data
       
    
section .rodata

section .text
_start:
    
;a global function to get the version number returned in rax
_proc square
    ;two ways to get the external vaiable
    ;first if it's stored in the datasegment, but this is a long approach
    mov     rax,rdi
    mul     rdi
_endp