.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC     
    ;INPUT 1
    MOV AH,1
    INT 21H
    MOV BH, AL 
    
    ;INPUT 2
    MOV AH,1
    INT 21H
    MOV BL, AL 
    
    ;INPUT 3
    MOV AH,1
    INT 21H
    MOV CL, AL 
    
    ;COMPARE
    CMP BH, BL
    JG NEXT
    MOV BH,BL
    JMP NEXT
    
    NEXT:
        CMP BH, CL
        JG PRINT_LARGE
        MOV BH, CL
        JMP PRINT_LARGE
    
    PRINT_LARGE:
        MOV AH, 2
        MOV DL, BH
        INT 21H     
           
MAIN ENDP 
END MAIN