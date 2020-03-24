; Name:     ssepackedfloatingpointarithmetic.asm
; Source:   Modern x86 Assembly Language Programming p. 238

bits 32
global SsePackedFpMath32_
global SsePackedFpMath64_

section .data
; Mask values used to calculate floating-point absolute values
align 16

    Pfp32Abs:   dd 0x7fffffff,0x7fffffff,0x7fffffff,0x7fffffff
    Pfp64Abs:   dq 0x7fffffffffffffff,0x7fffffffffffffff

section .text

; extern "C" void SsePackedFpMath32(const XmmVal* a, const XmmVal* b, XmmVal c[8]);
; Description:  The following function demonstrates basic math using
;               packed single-precision floating-point values.
; Requires:     SSE

%define	a   [ebp+8]
%define	b   [ebp+12]
%define	c   [ebp+16]

SsePackedFpMath32_:
    push    ebp
    mov     ebp,esp
    ; Load packed SP floating-point values
    mov     eax,a                        ;eax = 'a'
    mov     ecx,b                        ;ecx = 'b'
    mov     edx,c                        ;edx = 'c'
    movaps 	xmm0,[eax]                   ;xmm0 = *a
    movaps 	xmm1,[ecx]                   ;xmm1 = *b
    ; Packed SP floating-point addition
    movaps  xmm2,xmm0
    addps   xmm2,xmm1
    movaps  [edx+0],xmm2
    ; Packed SP floating-point subtraction
    movaps  xmm2,xmm0
    subps   xmm2,xmm1
    movaps  [edx+16],xmm2
    ; Packed SP floating-point multiplication
    movaps  xmm2,xmm0
    mulps   xmm2,xmm1
    movaps  [edx+32],xmm2
    ; Packed SP floating-point division
    movaps  xmm2,xmm0
    divps   xmm2,xmm1
    movaps  [edx+48],xmm2
    ; Packed SP floating-point absolute value
    movaps  xmm2,xmm0
    andps   xmm2,[Pfp32Abs]
    movaps  [edx+64],xmm2
    ; Packed SP floating-point square root
    sqrtps  xmm2,xmm0
    movaps  [edx+80],xmm2
    ; Packed SP floating-point minimum
    movaps  xmm2,xmm0
    minps   xmm2,xmm1
    movaps  [edx+96],xmm2
    ; Packed SP floating-point maximum
    maxps   xmm0,xmm1
    movaps  [edx+112],xmm0
    pop     ebp
    ret

; extern "C" void SsePackedFpMath64(const_ XmmVal* a, const XmmVal* b, XmmVal c[8]);
; Description:  The following function demonstrates basic math using
;               packed double-precision floating-point values.
; Requires:     SSE2

%define	a   [ebp+8]
%define	b   [ebp+12]
%define	c   [ebp+16]

SsePackedFpMath64_:
    push    ebp
    mov     ebp,esp
    ; Load packed DP floating-point values
    mov     eax,a                        ;eax = 'a'
    mov     ecx,b                        ;ecx = 'b'
    mov     edx,c                        ;edx = 'c'
    movapd  xmm0,[eax]                   ;xmm0 = *a
    movapd  xmm1,[ecx]                   ;xmm1 = *b
    ; Packed DP floating-point addition
    movapd  xmm2,xmm0
    addpd   xmm2,xmm1
    movapd  [edx+0],xmm2
    ; Packed DP floating-point subtraction
    movapd  xmm2,xmm0
    subpd   xmm2,xmm1
    movapd  [edx+16],xmm2
    ; Packed DP floating-point multiplication
    movapd  xmm2,xmm0
    mulpd   xmm2,xmm1
    movapd  [edx+32],xmm2
    ; Packed DP floating-point division
    movapd  xmm2,xmm0
    divpd   xmm2,xmm1
    movapd  [edx+48],xmm2
    ; Packed DP floating-point absolute value
    movapd  xmm2,xmm0
    andpd   xmm0,[Pfp64Abs]
    movapd  [edx+64],xmm2
    ; Packed DP floating-point square root
    sqrtpd  xmm2,xmm0
    movapd  [edx+80],xmm2
    ; Packed DP floating-point minimum
    movapd  xmm2,xmm0
    minpd   xmm2,xmm1
    movapd  [edx+96],xmm2
    ; Packed DP floating-point maximum
    maxpd   xmm0,xmm1
    movapd  [edx+112],xmm0
    pop     ebp
    ret
