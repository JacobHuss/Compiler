; These are all the procedures for 06_IfTest.mod. Main is first.

;============== BEGIN PROCEDURE ============
HussPiler_Main PROC	; Procedure definition
	push	EBP	; save EBP since we use it 
	mov	EBP,ESP
;~~~~~~~~~~~~~ PREAMBLE END ~~~~~~~~~~~~~~~~
	mov		EAX, 4
	push	EAX
	pop		EAX
	mov		[EBP + 12], EAX
	mov		EAX, 3
	push	EAX
	pop		EAX
	mov		[EBP + 8], EAX
	mov		EAX, [EBP + 12]
	push	EAX
	mov		EAX, [EBP + 8]
	push	EAX
	pop		ECX
	pop		EAX
	cmp		EAX, ECX
	jg		rel_true_0
	push	0
	jmp		rel_done_0
rel_true_0:
	push	1
rel_done_0:
	mov		EAX, 1
	pop		ECX
	cmp		EAX, ECX
	jne		else_0
	mov		EAX, [EBP + 12]
	push	EAX
	pop		EAX
	print	str$(EAX)
	call	nwln
	jmp		end_if_0
else_0:
	mov		EAX, [EBP + 8]
	push	EAX
	pop		EAX
	print	str$(EAX)
	call	nwln
end_if_0:
;~~~~~~~~~~~~~ POSTAMBLE BEGIN ~~~~~~~~~~~~~
	mov	ESP,EBP
	pop	EBP
	ret	8
HussPiler_Main endp
;=============== END PROCEDURE =============
