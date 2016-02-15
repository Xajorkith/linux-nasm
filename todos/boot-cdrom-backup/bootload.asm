ORG 0x7C00
BITS 16
start:
  jmp     0x0000:boot
  times 8-($-$$) db 0
 
  ;  Boot Information Table
;  bi_PrimaryVolumeDescriptor  resd  1    ; LBA of the Primary Volume Descriptor
;  bi_BootFileLocation         resd  1    ; LBA of the Boot File
;  bi_BootFileLength           resd  1    ; Length of the boot file in bytes
;  bi_Checksum                 resd  1    ; 32 bit checksum
;  bi_Reserved                 resb  40   ; Reserved 'for future standardization'
 
boot:
  ;  Boot code here - set segment registers etc...
  ; Main entry point where BIOS leaves us.
; Start of the program (thus at address 0x0000:0x7C00)

        ; Some BIOS' may load us at 0x0000:0x7C00 while other may load us at 0x07C0:0x0000.
        ; Do a far jump to fix this issue, and reload CS to 0x0000.

        jmp     0x0000:.flushCS               
                                     
.flushCS:
mov  ax, 0x4F02
mov  bx, 0x107              ; <-1280x1024 256 = 107h colors
;or   bx, 0x8000               ; don't clear video memory
;mov  ax,0x006A
int  0x10
; switch bank
; mov ax, 0x4F05
; mov bx, 0
; mov dx, 0
; int 0x10
;mov ax,012h ;VGA mode
; int 10h ;640 x 480 16 colors.

mov ax, 0xA000
mov es:ax

mov cx, 0                                              ; banknumber
nextbank:
; switch bank
 mov ax, 0x4F05
 mov bx, 0
 mov dx, cx                                            ; switch to banknumber in cx
 int 0x10
 ; draw again
 mov ax, 256                                            ; banknr * displacement 256
 mov bx, cx
 mul bx
 mov di, ax
 mov al, 00001000b                                       ; 0 = zwart
 push cx                                                 ; save banknumber
 mov cx, 1280*13
 rep stosb
 ;pop cx                                                ; restore banknumber
 ;add di, 1280*13-1                                      ; to last pixel = 1280 pixels in a line * 13 lines - 1 for nul position + banknr * 256 displacement
 ;mov cx, 1280*13-1
 ;rep stosb
 pop cx                                                ; restore banknumber
 ; we have 1024 lines on screen, per bank we draw 14 lines -> 1024 / 14 = approx 73 banks
 inc cx
 cmp cx, 79
 jne nextbank
 
 ; switch bank
; mov ax, 0x4F05
; mov bx, 0
; mov dx, 1
; int 0x10
 ; draw again
; mov al,00110000b
; mov di, 1*256
; mov cx, 1
; rep stosb
; mov di, 1280*13-1+1*256
; mov cx, 1
; rep stosb
 
 ; switch bank
; mov ax, 0x4F05
; mov bx, 0
; mov dx, 2
; int 0x10
 ; draw again
; mov al,00110000b
; mov di, 2*256
; mov cx, 1
; rep stosb
; mov di, 1280*13-1+2*256
; mov cx, 1
; rep stosb
 
 ;mov dx,03C4h ;dx = indexregister
 ;mov ax,0F02h            ;INDEX = MASK MAP, 
 ;out dx,ax               ;write all the bitplanes.
 ;mov di,0 ;DI pointer in the video memory.
 ;mov cx,(800 * 600)/16
 ;;mov ah, 0x05
 ;mov al,0xFF ;write to every pixel.
;; rep 
 ;stosb ;fill the screen

 ;mov dx,03C4h ;dx = indexregister
 ;mov ax,0102h ;INDEX = MASK MAP, 
 ;out dx,ax ;write all the bitplanes.
 ;mov di,1000                  ;DI pointer in the video memory.
 ;mov cx,(800 * 600)/16
 ;;mov ah, 0x05
 ;mov al,0xFF ;write to every pixel.
;; rep 
 ;stosb ;fill the screen
 
 .end: jmp .end     
     
     