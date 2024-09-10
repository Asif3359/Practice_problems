.MODEL SMALL
.STACK 100H
.DATA
    MSG1 DB "ENTER 1ST NUMBER: $"
    MSG2 DB "ENTER 2ND NUMBER: $"
    MSG3 DB "ENTER 3RD NUMBER: $"
    MSG4 DB "LARGEST NUMBER: $"
.CODE
MAIN PROC     
    
    MOV AX,@DATA
    MOV DS,AX
    
    ;MSG1 DISPLAY  
    LEA DX,MSG1
    MOV AH,9
    INT 21H
    
    ;INPUT
    MOV AH,1
    INT 21H
    MOV BH, AL 

    ;NEW LINE
    MOV AH,2
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H

    ;MSG2 DISPLAY  
    LEA DX,MSG2
    MOV AH,9
    INT 21H
    
    ;INPUT
    MOV AH,1
    INT 21H
    MOV BL, AL 

    ;NEW LINE
    MOV AH,2
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H
    

    ;MSG3 DISPLAY  
    LEA DX,MSG3
    MOV AH,9
    INT 21H

    ;INPUT
    MOV AH,1
    INT 21H
    MOV CL, AL 

    ;NEW LINE
    MOV AH,2
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H
    
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
        ;MSG4 DISPLAY  
        LEA DX,MSG4
        MOV AH,9
        INT 21H
        
        ;PRINT
        MOV AH, 2
        MOV DL, BH
        INT 21H     
           
MAIN ENDP 
END MAIN