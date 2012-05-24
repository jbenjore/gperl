	static void *jmp_table[] = {
	    &&L(UNDEF), &&L(MOV), &&L(iMOV),
	    &&L(dMOV), &&L(sMOV), &&L(oMOV),
	    &&L(ADD), &&L(iADD), &&L(dADD),
	    &&L(sADD), &&L(oADD), &&L(iADDC),
	    &&L(dADDC), &&L(SUB), &&L(iSUB),
	    &&L(dSUB), &&L(oSUB), &&L(iSUBC),
	    &&L(dSUBC), &&L(MUL), &&L(iMUL),
	    &&L(dMUL), &&L(sMUL), &&L(oMUL),
	    &&L(iMULC), &&L(dMULC), &&L(DIV),
	    &&L(iDIV), &&L(dDIV), &&L(oDIV),
	    &&L(iDIVC), &&L(dDIVC), &&L(JG),
	    &&L(iJG), &&L(dJG), &&L(sJG),
	    &&L(oJG), &&L(iJGC), &&L(dJGC),
	    &&L(JL), &&L(iJL), &&L(dJL),
	    &&L(sJL), &&L(oJL), &&L(iJLC),
	    &&L(dJLC), &&L(JE), &&L(iJE),
	    &&L(dJE), &&L(sJE), &&L(oJE),
	    &&L(iJEC), &&L(dJEC), &&L(JNE),
	    &&L(iJNE), &&L(dJNE), &&L(sJNE),
	    &&L(oJNE), &&L(iJNEC), &&L(dJNEC),
	    &&L(RET), &&L(iRET), &&L(dRET),
	    &&L(sRET), &&L(oRET), &&L(THCODE),
	    &&L(NOP), &&L(WRITE), &&L(iWRITE),
	    &&L(dWRITE), &&L(sWRITE), &&L(oWRITE),
	    &&L(FRUSH), &&L(JMP), &&L(LET),
	    &&L(SETv), &&L(FUNCSET), &&L(CALL),
	    &&L(iCALL), &&L(dCALL), &&L(sCALL),
	    &&L(oCALL), &&L(SELFCALL), &&L(iSELFCALL),
	    &&L(dSELFCALL), &&L(sSELFCALL), &&L(oSELFCALL),
	    &&L(SHIFT), &&L(iSHIFT), &&L(dSHIFT),
	    &&L(sSHIFT), &&L(oSHIFT), &&L(PUSH),
	    &&L(iPUSH), &&L(dPUSH), &&L(sPUSH),
	    &&L(oPUSH), &&L(NEW),	    &&L(A_MOV), &&L(B_MOV), &&L(C_MOV),
	    &&L(D_MOV), &&L(A_iMOV), &&L(A_dMOV),
	    &&L(A_sMOV), &&L(A_oMOV), &&L(B_iMOV),
	    &&L(B_dMOV), &&L(B_sMOV), &&L(B_oMOV),
	    &&L(C_iMOV), &&L(C_dMOV), &&L(C_sMOV),
	    &&L(C_oMOV), &&L(D_iMOV), &&L(D_dMOV),
	    &&L(D_sMOV), &&L(D_oMOV), &&L(AB_ADD),
	    &&L(AC_ADD), &&L(AD_ADD), &&L(BC_ADD),
	    &&L(BD_ADD), &&L(CD_ADD), &&L(AB_iADD),
	    &&L(AB_dADD), &&L(AB_sADD), &&L(AB_oADD),
	    &&L(AC_iADD), &&L(AC_dADD), &&L(AC_sADD),
	    &&L(AC_oADD), &&L(AD_iADD), &&L(AD_dADD),
	    &&L(AD_sADD), &&L(AD_oADD), &&L(BC_iADD),
	    &&L(BC_dADD), &&L(BC_sADD), &&L(BC_oADD),
	    &&L(BD_iADD), &&L(BD_dADD), &&L(BD_sADD),
	    &&L(BD_oADD), &&L(CD_iADD), &&L(CD_dADD),
	    &&L(CD_sADD), &&L(CD_oADD), &&L(AB_iADDC),
	    &&L(AB_dADDC), &&L(AB_sADDC), &&L(AC_iADDC),
	    &&L(AC_dADDC), &&L(AC_sADDC), &&L(AD_iADDC),
	    &&L(AD_dADDC), &&L(AD_sADDC), &&L(BC_iADDC),
	    &&L(BC_dADDC), &&L(BC_sADDC), &&L(BD_iADDC),
	    &&L(BD_dADDC), &&L(BD_sADDC), &&L(CD_iADDC),
	    &&L(CD_dADDC), &&L(CD_sADDC), &&L(AB_SUB),
	    &&L(AC_SUB), &&L(AD_SUB), &&L(BC_SUB),
	    &&L(BD_SUB), &&L(CD_SUB), &&L(AB_iSUB),
	    &&L(AB_dSUB), &&L(AB_oSUB), &&L(AC_iSUB),
	    &&L(AC_dSUB), &&L(AC_oSUB), &&L(AD_iSUB),
	    &&L(AD_dSUB), &&L(AD_oSUB), &&L(BC_iSUB),
	    &&L(BC_dSUB), &&L(BC_oSUB), &&L(BD_iSUB),
	    &&L(BD_dSUB), &&L(BD_oSUB), &&L(CD_iSUB),
	    &&L(CD_dSUB), &&L(CD_oSUB), &&L(AB_iSUBC),
	    &&L(AB_dSUBC), &&L(AC_iSUBC), &&L(AC_dSUBC),
	    &&L(AD_iSUBC), &&L(AD_dSUBC), &&L(BC_iSUBC),
	    &&L(BC_dSUBC), &&L(BD_iSUBC), &&L(BD_dSUBC),
	    &&L(CD_iSUBC), &&L(CD_dSUBC), &&L(AB_MUL),
	    &&L(AC_MUL), &&L(AD_MUL), &&L(BC_MUL),
	    &&L(BD_MUL), &&L(CD_MUL), &&L(AB_iMUL),
	    &&L(AB_dMUL), &&L(AB_sMUL), &&L(AB_oMUL),
	    &&L(AC_iMUL), &&L(AC_dMUL), &&L(AC_sMUL),
	    &&L(AC_oMUL), &&L(AD_iMUL), &&L(AD_dMUL),
	    &&L(AD_sMUL), &&L(AD_oMUL), &&L(BC_iMUL),
	    &&L(BC_dMUL), &&L(BC_sMUL), &&L(BC_oMUL),
	    &&L(BD_iMUL), &&L(BD_dMUL), &&L(BD_sMUL),
	    &&L(BD_oMUL), &&L(CD_iMUL), &&L(CD_dMUL),
	    &&L(CD_sMUL), &&L(CD_oMUL), &&L(AB_iMULC),
	    &&L(AB_dMULC), &&L(AB_sMULC), &&L(AC_iMULC),
	    &&L(AC_dMULC), &&L(AC_sMULC), &&L(AD_iMULC),
	    &&L(AD_dMULC), &&L(AD_sMULC), &&L(BC_iMULC),
	    &&L(BC_dMULC), &&L(BC_sMULC), &&L(BD_iMULC),
	    &&L(BD_dMULC), &&L(BD_sMULC), &&L(CD_iMULC),
	    &&L(CD_dMULC), &&L(CD_sMULC), &&L(AB_DIV),
	    &&L(AC_DIV), &&L(AD_DIV), &&L(BC_DIV),
	    &&L(BD_DIV), &&L(CD_DIV), &&L(AB_iDIV),
	    &&L(AB_dDIV), &&L(AB_oDIV), &&L(AC_iDIV),
	    &&L(AC_dDIV), &&L(AC_oDIV), &&L(AD_iDIV),
	    &&L(AD_dDIV), &&L(AD_oDIV), &&L(BC_iDIV),
	    &&L(BC_dDIV), &&L(BC_oDIV), &&L(BD_iDIV),
	    &&L(BD_dDIV), &&L(BD_oDIV), &&L(CD_iDIV),
	    &&L(CD_dDIV), &&L(CD_oDIV), &&L(AB_iDIVC),
	    &&L(AB_dDIVC), &&L(AC_iDIVC), &&L(AC_dDIVC),
	    &&L(AD_iDIVC), &&L(AD_dDIVC), &&L(BC_iDIVC),
	    &&L(BC_dDIVC), &&L(BD_iDIVC), &&L(BD_dDIVC),
	    &&L(CD_iDIVC), &&L(CD_dDIVC), &&L(A_JG),
	    &&L(B_JG), &&L(C_JG), &&L(D_JG),
	    &&L(A_iJG), &&L(A_dJG), &&L(A_sJG),
	    &&L(A_oJG), &&L(B_iJG), &&L(B_dJG),
	    &&L(B_sJG), &&L(B_oJG), &&L(C_iJG),
	    &&L(C_dJG), &&L(C_sJG), &&L(C_oJG),
	    &&L(D_iJG), &&L(D_dJG), &&L(D_sJG),
	    &&L(D_oJG), &&L(A_iJGC), &&L(A_dJGC),
	    &&L(A_sJGC), &&L(A_oJGC), &&L(B_iJGC),
	    &&L(B_dJGC), &&L(B_sJGC), &&L(B_oJGC),
	    &&L(C_iJGC), &&L(C_dJGC), &&L(C_sJGC),
	    &&L(C_oJGC), &&L(D_iJGC), &&L(D_dJGC),
	    &&L(D_sJGC), &&L(D_oJGC), &&L(A_JL),
	    &&L(B_JL), &&L(C_JL), &&L(D_JL),
	    &&L(A_iJL), &&L(A_dJL), &&L(A_sJL),
	    &&L(A_oJL), &&L(B_iJL), &&L(B_dJL),
	    &&L(B_sJL), &&L(B_oJL), &&L(C_iJL),
	    &&L(C_dJL), &&L(C_sJL), &&L(C_oJL),
	    &&L(D_iJL), &&L(D_dJL), &&L(D_sJL),
	    &&L(D_oJL), &&L(A_iJLC), &&L(A_dJLC),
	    &&L(A_sJLC), &&L(A_oJLC), &&L(B_iJLC),
	    &&L(B_dJLC), &&L(B_sJLC), &&L(B_oJLC),
	    &&L(C_iJLC), &&L(C_dJLC), &&L(C_sJLC),
	    &&L(C_oJLC), &&L(D_iJLC), &&L(D_dJLC),
	    &&L(D_sJLC), &&L(D_oJLC), &&L(A_JE),
	    &&L(B_JE), &&L(C_JE), &&L(D_JE),
	    &&L(A_iJE), &&L(A_dJE), &&L(A_sJE),
	    &&L(A_oJE), &&L(B_iJE), &&L(B_dJE),
	    &&L(B_sJE), &&L(B_oJE), &&L(C_iJE),
	    &&L(C_dJE), &&L(C_sJE), &&L(C_oJE),
	    &&L(D_iJE), &&L(D_dJE), &&L(D_sJE),
	    &&L(D_oJE), &&L(A_iJEC), &&L(A_dJEC),
	    &&L(A_sJEC), &&L(A_oJEC), &&L(B_iJEC),
	    &&L(B_dJEC), &&L(B_sJEC), &&L(B_oJEC),
	    &&L(C_iJEC), &&L(C_dJEC), &&L(C_sJEC),
	    &&L(C_oJEC), &&L(D_iJEC), &&L(D_dJEC),
	    &&L(D_sJEC), &&L(D_oJEC), &&L(A_JNE),
	    &&L(B_JNE), &&L(C_JNE), &&L(D_JNE),
	    &&L(A_iJNE), &&L(A_dJNE), &&L(A_sJNE),
	    &&L(A_oJNE), &&L(B_iJNE), &&L(B_dJNE),
	    &&L(B_sJNE), &&L(B_oJNE), &&L(C_iJNE),
	    &&L(C_dJNE), &&L(C_sJNE), &&L(C_oJNE),
	    &&L(D_iJNE), &&L(D_dJNE), &&L(D_sJNE),
	    &&L(D_oJNE), &&L(A_iJNEC), &&L(A_dJNEC),
	    &&L(A_sJNEC), &&L(A_oJNEC), &&L(B_iJNEC),
	    &&L(B_dJNEC), &&L(B_sJNEC), &&L(B_oJNEC),
	    &&L(C_iJNEC), &&L(C_dJNEC), &&L(C_sJNEC),
	    &&L(C_oJNEC), &&L(D_iJNEC), &&L(D_dJNEC),
	    &&L(D_sJNEC), &&L(D_oJNEC), &&L(A_RET),
	    &&L(B_RET), &&L(C_RET), &&L(D_RET),
	    &&L(A_iRET), &&L(A_dRET), &&L(A_sRET),
	    &&L(A_oRET), &&L(B_iRET), &&L(B_dRET),
	    &&L(B_sRET), &&L(B_oRET), &&L(C_iRET),
	    &&L(C_dRET), &&L(C_sRET), &&L(C_oRET),
	    &&L(D_iRET), &&L(D_dRET), &&L(D_sRET),
	    &&L(D_oRET), &&L(A_PUSH), &&L(B_PUSH),
	    &&L(C_PUSH), &&L(D_PUSH), &&L(A_iPUSH),
	    &&L(A_dPUSH), &&L(A_sPUSH), &&L(A_oPUSH),
	    &&L(B_iPUSH), &&L(B_dPUSH), &&L(B_sPUSH),
	    &&L(B_oPUSH), &&L(C_iPUSH), &&L(C_dPUSH),
	    &&L(C_sPUSH), &&L(C_oPUSH), &&L(D_iPUSH),
	    &&L(D_dPUSH), &&L(D_sPUSH), &&L(D_oPUSH),

	};
	static InstBlock block_table[] = {
	    B(UNDEF), B(MOV), B(iMOV),
	    B(dMOV), B(sMOV), B(oMOV),
	    B(ADD), B(iADD), B(dADD),
	    B(sADD), B(oADD), B(iADDC),
	    B(dADDC), B(SUB), B(iSUB),
	    B(dSUB), B(oSUB), B(iSUBC),
	    B(dSUBC), B(MUL), B(iMUL),
	    B(dMUL), B(sMUL), B(oMUL),
	    B(iMULC), B(dMULC), B(DIV),
	    B(iDIV), B(dDIV), B(oDIV),
	    B(iDIVC), B(dDIVC), B(JG),
	    B(iJG), B(dJG), B(sJG),
	    B(oJG), B(iJGC), B(dJGC),
	    B(JL), B(iJL), B(dJL),
	    B(sJL), B(oJL), B(iJLC),
	    B(dJLC), B(JE), B(iJE),
	    B(dJE), B(sJE), B(oJE),
	    B(iJEC), B(dJEC), B(JNE),
	    B(iJNE), B(dJNE), B(sJNE),
	    B(oJNE), B(iJNEC), B(dJNEC),
	    B(RET), B(iRET), B(dRET),
	    B(sRET), B(oRET), B(THCODE),
	    B(NOP), B(WRITE), B(iWRITE),
	    B(dWRITE), B(sWRITE), B(oWRITE),
	    B(FRUSH), B(JMP), B(LET),
	    B(SETv), B(FUNCSET), B(CALL),
	    B(iCALL), B(dCALL), B(sCALL),
	    B(oCALL), B(SELFCALL), B(iSELFCALL),
	    B(dSELFCALL), B(sSELFCALL), B(oSELFCALL),
	    B(SHIFT), B(iSHIFT), B(dSHIFT),
	    B(sSHIFT), B(oSHIFT), B(PUSH),
	    B(iPUSH), B(dPUSH), B(sPUSH),
	    B(oPUSH), B(NEW),	    B(A_MOV), B(B_MOV), B(C_MOV),
	    B(D_MOV), B(A_iMOV), B(A_dMOV),
	    B(A_sMOV), B(A_oMOV), B(B_iMOV),
	    B(B_dMOV), B(B_sMOV), B(B_oMOV),
	    B(C_iMOV), B(C_dMOV), B(C_sMOV),
	    B(C_oMOV), B(D_iMOV), B(D_dMOV),
	    B(D_sMOV), B(D_oMOV), B(AB_ADD),
	    B(AC_ADD), B(AD_ADD), B(BC_ADD),
	    B(BD_ADD), B(CD_ADD), B(AB_iADD),
	    B(AB_dADD), B(AB_sADD), B(AB_oADD),
	    B(AC_iADD), B(AC_dADD), B(AC_sADD),
	    B(AC_oADD), B(AD_iADD), B(AD_dADD),
	    B(AD_sADD), B(AD_oADD), B(BC_iADD),
	    B(BC_dADD), B(BC_sADD), B(BC_oADD),
	    B(BD_iADD), B(BD_dADD), B(BD_sADD),
	    B(BD_oADD), B(CD_iADD), B(CD_dADD),
	    B(CD_sADD), B(CD_oADD), B(AB_iADDC),
	    B(AB_dADDC), B(AB_sADDC), B(AC_iADDC),
	    B(AC_dADDC), B(AC_sADDC), B(AD_iADDC),
	    B(AD_dADDC), B(AD_sADDC), B(BC_iADDC),
	    B(BC_dADDC), B(BC_sADDC), B(BD_iADDC),
	    B(BD_dADDC), B(BD_sADDC), B(CD_iADDC),
	    B(CD_dADDC), B(CD_sADDC), B(AB_SUB),
	    B(AC_SUB), B(AD_SUB), B(BC_SUB),
	    B(BD_SUB), B(CD_SUB), B(AB_iSUB),
	    B(AB_dSUB), B(AB_oSUB), B(AC_iSUB),
	    B(AC_dSUB), B(AC_oSUB), B(AD_iSUB),
	    B(AD_dSUB), B(AD_oSUB), B(BC_iSUB),
	    B(BC_dSUB), B(BC_oSUB), B(BD_iSUB),
	    B(BD_dSUB), B(BD_oSUB), B(CD_iSUB),
	    B(CD_dSUB), B(CD_oSUB), B(AB_iSUBC),
	    B(AB_dSUBC), B(AC_iSUBC), B(AC_dSUBC),
	    B(AD_iSUBC), B(AD_dSUBC), B(BC_iSUBC),
	    B(BC_dSUBC), B(BD_iSUBC), B(BD_dSUBC),
	    B(CD_iSUBC), B(CD_dSUBC), B(AB_MUL),
	    B(AC_MUL), B(AD_MUL), B(BC_MUL),
	    B(BD_MUL), B(CD_MUL), B(AB_iMUL),
	    B(AB_dMUL), B(AB_sMUL), B(AB_oMUL),
	    B(AC_iMUL), B(AC_dMUL), B(AC_sMUL),
	    B(AC_oMUL), B(AD_iMUL), B(AD_dMUL),
	    B(AD_sMUL), B(AD_oMUL), B(BC_iMUL),
	    B(BC_dMUL), B(BC_sMUL), B(BC_oMUL),
	    B(BD_iMUL), B(BD_dMUL), B(BD_sMUL),
	    B(BD_oMUL), B(CD_iMUL), B(CD_dMUL),
	    B(CD_sMUL), B(CD_oMUL), B(AB_iMULC),
	    B(AB_dMULC), B(AB_sMULC), B(AC_iMULC),
	    B(AC_dMULC), B(AC_sMULC), B(AD_iMULC),
	    B(AD_dMULC), B(AD_sMULC), B(BC_iMULC),
	    B(BC_dMULC), B(BC_sMULC), B(BD_iMULC),
	    B(BD_dMULC), B(BD_sMULC), B(CD_iMULC),
	    B(CD_dMULC), B(CD_sMULC), B(AB_DIV),
	    B(AC_DIV), B(AD_DIV), B(BC_DIV),
	    B(BD_DIV), B(CD_DIV), B(AB_iDIV),
	    B(AB_dDIV), B(AB_oDIV), B(AC_iDIV),
	    B(AC_dDIV), B(AC_oDIV), B(AD_iDIV),
	    B(AD_dDIV), B(AD_oDIV), B(BC_iDIV),
	    B(BC_dDIV), B(BC_oDIV), B(BD_iDIV),
	    B(BD_dDIV), B(BD_oDIV), B(CD_iDIV),
	    B(CD_dDIV), B(CD_oDIV), B(AB_iDIVC),
	    B(AB_dDIVC), B(AC_iDIVC), B(AC_dDIVC),
	    B(AD_iDIVC), B(AD_dDIVC), B(BC_iDIVC),
	    B(BC_dDIVC), B(BD_iDIVC), B(BD_dDIVC),
	    B(CD_iDIVC), B(CD_dDIVC), B(A_JG),
	    B(B_JG), B(C_JG), B(D_JG),
	    B(A_iJG), B(A_dJG), B(A_sJG),
	    B(A_oJG), B(B_iJG), B(B_dJG),
	    B(B_sJG), B(B_oJG), B(C_iJG),
	    B(C_dJG), B(C_sJG), B(C_oJG),
	    B(D_iJG), B(D_dJG), B(D_sJG),
	    B(D_oJG), B(A_iJGC), B(A_dJGC),
	    B(A_sJGC), B(A_oJGC), B(B_iJGC),
	    B(B_dJGC), B(B_sJGC), B(B_oJGC),
	    B(C_iJGC), B(C_dJGC), B(C_sJGC),
	    B(C_oJGC), B(D_iJGC), B(D_dJGC),
	    B(D_sJGC), B(D_oJGC), B(A_JL),
	    B(B_JL), B(C_JL), B(D_JL),
	    B(A_iJL), B(A_dJL), B(A_sJL),
	    B(A_oJL), B(B_iJL), B(B_dJL),
	    B(B_sJL), B(B_oJL), B(C_iJL),
	    B(C_dJL), B(C_sJL), B(C_oJL),
	    B(D_iJL), B(D_dJL), B(D_sJL),
	    B(D_oJL), B(A_iJLC), B(A_dJLC),
	    B(A_sJLC), B(A_oJLC), B(B_iJLC),
	    B(B_dJLC), B(B_sJLC), B(B_oJLC),
	    B(C_iJLC), B(C_dJLC), B(C_sJLC),
	    B(C_oJLC), B(D_iJLC), B(D_dJLC),
	    B(D_sJLC), B(D_oJLC), B(A_JE),
	    B(B_JE), B(C_JE), B(D_JE),
	    B(A_iJE), B(A_dJE), B(A_sJE),
	    B(A_oJE), B(B_iJE), B(B_dJE),
	    B(B_sJE), B(B_oJE), B(C_iJE),
	    B(C_dJE), B(C_sJE), B(C_oJE),
	    B(D_iJE), B(D_dJE), B(D_sJE),
	    B(D_oJE), B(A_iJEC), B(A_dJEC),
	    B(A_sJEC), B(A_oJEC), B(B_iJEC),
	    B(B_dJEC), B(B_sJEC), B(B_oJEC),
	    B(C_iJEC), B(C_dJEC), B(C_sJEC),
	    B(C_oJEC), B(D_iJEC), B(D_dJEC),
	    B(D_sJEC), B(D_oJEC), B(A_JNE),
	    B(B_JNE), B(C_JNE), B(D_JNE),
	    B(A_iJNE), B(A_dJNE), B(A_sJNE),
	    B(A_oJNE), B(B_iJNE), B(B_dJNE),
	    B(B_sJNE), B(B_oJNE), B(C_iJNE),
	    B(C_dJNE), B(C_sJNE), B(C_oJNE),
	    B(D_iJNE), B(D_dJNE), B(D_sJNE),
	    B(D_oJNE), B(A_iJNEC), B(A_dJNEC),
	    B(A_sJNEC), B(A_oJNEC), B(B_iJNEC),
	    B(B_dJNEC), B(B_sJNEC), B(B_oJNEC),
	    B(C_iJNEC), B(C_dJNEC), B(C_sJNEC),
	    B(C_oJNEC), B(D_iJNEC), B(D_dJNEC),
	    B(D_sJNEC), B(D_oJNEC), B(A_RET),
	    B(B_RET), B(C_RET), B(D_RET),
	    B(A_iRET), B(A_dRET), B(A_sRET),
	    B(A_oRET), B(B_iRET), B(B_dRET),
	    B(B_sRET), B(B_oRET), B(C_iRET),
	    B(C_dRET), B(C_sRET), B(C_oRET),
	    B(D_iRET), B(D_dRET), B(D_sRET),
	    B(D_oRET), B(A_PUSH), B(B_PUSH),
	    B(C_PUSH), B(D_PUSH), B(A_iPUSH),
	    B(A_dPUSH), B(A_sPUSH), B(A_oPUSH),
	    B(B_iPUSH), B(B_dPUSH), B(B_sPUSH),
	    B(B_oPUSH), B(C_iPUSH), B(C_dPUSH),
	    B(C_sPUSH), B(C_oPUSH), B(D_iPUSH),
	    B(D_dPUSH), B(D_sPUSH), B(D_oPUSH),

	};