case 0:
        for (i=1; i< n; i++) {
            __asm("ADD %BH, %BL");
        }
    break;
case 1:
        for (i=1; i< n; i++) {
            __asm("ADD %AX, %BX");
        }
    break;
case 2:
        for (i=1; i< n; i++) {
            __asm("ADD %BH, %BL");
        }
    break;
case 3:
        for (i=1; i< n; i++) {
            __asm("ADD %AX, %BX");
        }
    break;
case 4:
            for (i=1; i< n; i++) {
                __asm("ADD %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 5:
            for (i=1; i< n; i++) {
                __asm("ADD %%eax, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 6:
        for (i=1; i< n; i++) {
            __asm("OR %BH, %BL");
        }
    break;
case 7:
        for (i=1; i< n; i++) {
            __asm("OR %AX, %BX");
        }
    break;
case 8:
        for (i=1; i< n; i++) {
            __asm("OR %BH, %BL");
        }
    break;
case 9:
        for (i=1; i< n; i++) {
            __asm("OR %AX, %BX");
        }
    break;
case 10:
            for (i=1; i< n; i++) {
                __asm("OR %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 11:
            for (i=1; i< n; i++) {
                __asm("OR %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 12:
        for (i=1; i< n; i++) {
            __asm("ADC %BH, %BL");
        }
    break;
case 13:
        for (i=1; i< n; i++) {
            __asm("ADC %AX, %BX");
        }
    break;
case 14:
        for (i=1; i< n; i++) {
            __asm("ADC %BH, %BL");
        }
    break;
case 15:
        for (i=1; i< n; i++) {
            __asm("ADC %AX, %BX");
        }
    break;
case 16:
            for (i=1; i< n; i++) {
                __asm("ADC %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 17:
            for (i=1; i< n; i++) {
                __asm("ADC %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 18:
        for (i=1; i< n; i++) {
            __asm("SBB %BH, %BL");
        }
    break;
case 19:
        for (i=1; i< n; i++) {
            __asm("SBB %AX, %BX");
        }
    break;
case 20:
        for (i=1; i< n; i++) {
            __asm("SBB %BH, %BL");
        }
    break;
case 21:
        for (i=1; i< n; i++) {
            __asm("SBB %AX, %BX");
        }
    break;
case 22:
            for (i=1; i< n; i++) {
                __asm("SBB %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 23:
            for (i=1; i< n; i++) {
                __asm("SBB %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 24:
        for (i=1; i< n; i++) {
            __asm("AND %BH, %BL");
        }
    break;
case 25:
        for (i=1; i< n; i++) {
            __asm("AND %AX, %BX");
        }
    break;
case 26:
        for (i=1; i< n; i++) {
            __asm("AND %BH, %BL");
        }
    break;
case 27:
        for (i=1; i< n; i++) {
            __asm("AND %AX, %BX");
        }
    break;
case 28:
            for (i=1; i< n; i++) {
                __asm("AND %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 29:
            for (i=1; i< n; i++) {
                __asm("AND %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 30:
        for (i=1; i< n; i++) {
            __asm("SUB %BH, %BL");
        }
    break;
case 31:
        for (i=1; i< n; i++) {
            __asm("SUB %AX, %BX");
        }
    break;
case 32:
        for (i=1; i< n; i++) {
            __asm("SUB %BH, %BL");
        }
    break;
case 33:
        for (i=1; i< n; i++) {
            __asm("SUB %AX, %BX");
        }
    break;
case 34:
            for (i=1; i< n; i++) {
                __asm("SUB %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 35:
            for (i=1; i< n; i++) {
                __asm("SUB %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 36:
        for (i=1; i< n; i++) {
            __asm("XOR %BH, %BL");
        }
    break;
case 37:
        for (i=1; i< n; i++) {
            __asm("XOR %AX, %BX");
        }
    break;
case 38:
        for (i=1; i< n; i++) {
            __asm("XOR %BH, %BL");
        }
    break;
case 39:
        for (i=1; i< n; i++) {
            __asm("XOR %AX, %BX");
        }
    break;
case 40:
            for (i=1; i< n; i++) {
                __asm("XOR %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 41:
            for (i=1; i< n; i++) {
                __asm("XOR %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 42:
        for (i=1; i< n; i++) {
            __asm("CMP %BH, %BL");
        }
    break;
case 43:
        for (i=1; i< n; i++) {
            __asm("CMP %AX, %BX");
        }
    break;
case 44:
        for (i=1; i< n; i++) {
            __asm("CMP %BH, %BL");
        }
    break;
case 45:
        for (i=1; i< n; i++) {
            __asm("CMP %AX, %BX");
        }
    break;
case 46:
            for (i=1; i< n; i++) {
                __asm("CMP %%AL, %0" : "=r" (myvar) : : "%al");
            }
        break;
case 47:
            for (i=1; i< n; i++) {
                __asm("CMP %%EAX, %0" : "=r" (myvar32) : : "%eax");
            }
        break;
case 48:
        for (i=1; i< n; i++) {
            __asm("IMUL %AX, %BX");
        }
    break;
case 49:
        for (i=1; i< n; i++) {
            __asm("IMUL %AX, %BX");
        }
    break;
case 50:
            for (i=1; i< n; i++) {
                __asm("ADD %%BH, %0" : "=r" (myvar));
            }
        break;
case 51:
            for (i=1; i< n; i++) {
                __asm("OR %%BH, %0" : "=r" (myvar));
            }
        break;
case 52:
            for (i=1; i< n; i++) {
                __asm("ADC %%BH, %0" : "=r" (myvar));
            }
        break;
case 53:
            for (i=1; i< n; i++) {
                __asm("SBB %%BH, %0" : "=r" (myvar));
            }
        break;
case 54:
            for (i=1; i< n; i++) {
                __asm("AND %%BH, %0" : "=r" (myvar));
            }
        break;
case 55:
            for (i=1; i< n; i++) {
                __asm("SUB %%BH, %0" : "=r" (myvar));
            }
        break;
case 56:
            for (i=1; i< n; i++) {
                __asm("XOR %%BH, %0" : "=r" (myvar));
            }
        break;
case 57:
            for (i=1; i< n; i++) {
                __asm("CMP %%BH, %0" : "=r" (myvar));
            }
        break;
case 58:
            for (i=1; i< n; i++) {
                __asm("ADD %%AX, %0" : "=r" (myvar16));
            }
        break;
case 59:
            for (i=1; i< n; i++) {
                __asm("OR %%AX, %0" : "=r" (myvar16));
            }
        break;
case 60:
            for (i=1; i< n; i++) {
                __asm("ADC %%AX, %0" : "=r" (myvar16));
            }
        break;
case 61:
            for (i=1; i< n; i++) {
                __asm("SBB %%AX, %0" : "=r" (myvar16));
            }
        break;
case 62:
            for (i=1; i< n; i++) {
                __asm("AND %%AX, %0" : "=r" (myvar16));
            }
        break;
case 63:
            for (i=1; i< n; i++) {
                __asm("SUB %%AX, %0" : "=r" (myvar16));
            }
        break;
case 64:
            for (i=1; i< n; i++) {
                __asm("XOR %%AX, %0" : "=r" (myvar16));
            }
        break;
case 65:
            for (i=1; i< n; i++) {
                __asm("CMP %%AX, %0" : "=r" (myvar16));
            }
        break;
case 66:
        for (i=1; i< n; i++) {
            __asm("TEST %BH, %BL");
        }
    break;
case 67:
        for (i=1; i< n; i++) {
            __asm("TEST %AX, %BX");
        }
    break;
case 68:
        for (i=1; i< n; i++) {
            __asm("XCHG %BH, %BL");
        }
    break;
case 69:
        for (i=1; i< n; i++) {
            __asm("XCHG %AX, %BX");
        }
    break;
case 70:
        for (i=1; i< n; i++) {
            __asm("MOV %BH, %BL");
        }
    break;
case 71:
        for (i=1; i< n; i++) {
            __asm("MOV %AX, %BX");
        }
    break;
case 72:
        for (i=1; i< n; i++) {
            __asm("MOV %BH, %BL");
        }
    break;
case 73:
        for (i=1; i< n; i++) {
            __asm("MOV %AX, %BX");
        }
    break;
case 74:
            for (i=1; i< n; i++) {
                __asm("TEST %%AL, %0" : "=r" (myvar));
            }
        break;
case 75:
            for (i=1; i< n; i++) {
                __asm("TEST %%EAX, %0" : "=r" (myvar32));
            }
        break;
case 76:
            for (i=1; i< n; i++) {
                __asm("ROL %%CL, %0" : "=r" (myvar));
            }
        break;
case 77:
            for (i=1; i< n; i++) {
                __asm("ROR %%CL, %0" : "=r" (myvar));
            }
        break;
case 78:
            for (i=1; i< n; i++) {
                __asm("RCL %%CL, %0" : "=r" (myvar));
            }
        break;
case 79:
            for (i=1; i< n; i++) {
                __asm("RCR %%CL, %0" : "=r" (myvar));
            }
        break;
case 80:
            for (i=1; i< n; i++) {
                __asm("SHL %%CL, %0" : "=r" (myvar));
            }
        break;
case 81:
            for (i=1; i< n; i++) {
                __asm("SHR %%CL, %0" : "=r" (myvar));
            }
        break;
case 82:
            for (i=1; i< n; i++) {
                __asm("SAL %%CL, %0" : "=r" (myvar));
            }
        break;
case 83:
            for (i=1; i< n; i++) {
                __asm("SAR %%CL, %0" : "=r" (myvar));
            }
        break;
case 84:
            for (i=1; i< n; i++) {
                __asm("MOV %%BH, %0" : "=r" (myvar));
            }
        break;
case 85:
            for (i=1; i< n; i++) {
                __asm("MOV %%AX, %0" : "=r" (myvar16));
            }
        break;
case 86:
            for (i=1; i< n; i++) {
                __asm("ROL $1, %CL");
            }
        break;
case 87:
            for (i=1; i< n; i++) {
                __asm("ROR $1, %CL");
            }
        break;
case 88:
            for (i=1; i< n; i++) {
                __asm("RCL $1, %CL");
            }
        break;
case 89:
            for (i=1; i< n; i++) {
                __asm("RCR $1, %CL");
            }
        break;
case 90:
            for (i=1; i< n; i++) {
                __asm("SHL $1, %CL ");
            }
        break;
case 91:
            for (i=1; i< n; i++) {
                __asm("SHR $1, %CL");
            }
        break;
case 92:
            for (i=1; i< n; i++) {
                __asm("SAL $1, %CL ");
            }
        break;
case 93:
            for (i=1; i< n; i++) {
                __asm("SAR $1, %CL");
            }
        break;
case 94:
            for (i=1; i< n; i++) {
                __asm("ROL $1, %CX");
            }
        break;
case 95:
            for (i=1; i< n; i++) {
                __asm("ROR $1,%AX");
            }
        break;
case 96:
            for (i=1; i< n; i++) {
                __asm("RCL $1, %AX");
            }
        break;
case 97:
            for (i=1; i< n; i++) {
                __asm("RCR $1, %AX");
            }
        break;
case 98:
            for (i=1; i< n; i++) {
                __asm("SHL $1, %AX");
            }
        break;
case 99:
            for (i=1; i< n; i++) {
                __asm("SHR $1, %AX");
            }
        break;
case 100:
            for (i=1; i< n; i++) {
                __asm("SAL $1, %AX");
            }
        break;
case 101:
            for (i=1; i< n; i++) {
                __asm("SAR $1, %AX");
            }
        break;
case 102:
            for (i=1; i< n; i++) {
                __asm("ROL %CL, %BH");
            }
        break;
case 103:
            for (i=1; i< n; i++) {
                __asm("ROR %CL, %BH");
            }
        break;
case 104:
            for (i=1; i< n; i++) {
                __asm("RCL %CL, %BH");
            }
        break;
case 105:
            for (i=1; i< n; i++) {
                __asm("RCR %CL, %BH");
            }
        break;
case 106:
            for (i=1; i< n; i++) {
                __asm("SHL %CL, %BH");
            }
        break;
case 107:
            for (i=1; i< n; i++) {
                __asm("SHR %CL, %BH");
            }
        break;
case 108:
            for (i=1; i< n; i++) {
                __asm("SAL %CL, %BH");
            }
        break;
case 109:
            for (i=1; i< n; i++) {
                __asm("SAR %CL, %BH");
            }
        break;
case 110:
            for (i=1; i< n; i++) {
                __asm("ROL %CL, %AX");
            }
        break;
case 111:
            for (i=1; i< n; i++) {
                __asm("ROR %CL, %CX");
            }
        break;
case 112:
            for (i=1; i< n; i++) {
                __asm("RCL %CL, %AX");
            }
        break;
case 113:
            for (i=1; i< n; i++) {
                __asm("RCR %CL, %AX");
            }
        break;
case 114:
            for (i=1; i< n; i++) {
                __asm("SHL %CL, %AX");
            }
        break;
case 115:
            for (i=1; i< n; i++) {
                __asm("SHR %CL, %AX");
            }
        break;
case 116:
            for (i=1; i< n; i++) {
                __asm("SAL %CL, %AX");
            }
        break;
case 117:
            for (i=1; i< n; i++) {
                __asm("SAR %CL, %AX");
            }
        break;
// case 118:
//             for (i=1; i< n; i++) {
//                 __asm("IN %%DX, %%AL" : : "r" : "%dx","%al");
//             }
//         break;
case 118:
            for (i=1; i< n; i++) {
                __asm("TEST %%BH, %0" : "=r" (myvar));
            }
        break;
case 119:
            for (i=1; i< n; i++) {
                __asm("TEST %%BH, %0" : "=r" (myvar));
            }
        break;
case 120:
            for (i=1; i< n; i++) {
                __asm("TEST %%AX, %0" : "=r" (myvar16));
            }
        break;
case 121:
            for (i=1; i< n; i++) {
                __asm("TEST %%AX, %0" : "=r" (myvar16));
            }
        break;
case 122:
        for (i=1; i< n; i++) {
            __asm("CMOVO %AX, %BX");
        }
    break;
case 123:
        for (i=1; i< n; i++) {
            __asm("CMOVNO %AX, %BX");
        }
    break;
case 124:
        for (i=1; i< n; i++) {
            __asm("CMOVB %AX, %BX");
        }
    break;
case 125:
        for (i=1; i< n; i++) {
            __asm("CMOVNB %AX, %BX");
        }
    break;
case 126:
        for (i=1; i< n; i++) {
            __asm("CMOVZ %AX, %BX");
        }
    break;
case 127:
        for (i=1; i< n; i++) {
            __asm("CMOVNZ %AX, %BX");
        }
    break;
case 128:
        for (i=1; i< n; i++) {
            __asm("CMOVBE %AX, %BX");
        }
    break;
case 129:
        for (i=1; i< n; i++) {
            __asm("CMOVNBE %AX, %BX");
        }
    break;
case 130:
        for (i=1; i< n; i++) {
            __asm("CMOVS %AX, %BX");
        }
    break;
case 131:
        for (i=1; i< n; i++) {
            __asm("CMOVNS %AX, %BX");
        }
    break;
case 132:
        for (i=1; i< n; i++) {
            __asm("CMOVP %AX, %BX");
        }
    break;
case 133:
        for (i=1; i< n; i++) {
            __asm("CMOVNP %AX, %BX");
        }
    break;
case 134:
        for (i=1; i< n; i++) {
            __asm("CMOVL %AX, %BX");
        }
    break;
case 135:
        for (i=1; i< n; i++) {
            __asm("CMOVNL %AX, %BX");
        }
    break;
case 136:
        for (i=1; i< n; i++) {
            __asm("CMOVLE %AX, %BX");
        }
    break;
case 137:
        for (i=1; i< n; i++) {
            __asm("CMOVNLE %AX, %BX");
        }
    break;
case 138:
        for (i=1; i< n; i++) {
            __asm("BT %AX, %BX");
        }
    break;
case 139:
        for (i=1; i< n; i++) {
            __asm("SHLD %AX, %BX");
        }
    break;
case 140:
        for (i=1; i< n; i++) {
            __asm("SHLD %AX, %BX");
        }
    break;
case 141:
        for (i=1; i< n; i++) {
            __asm("BTS %AX, %BX");
        }
    break;
case 142:
        for (i=1; i< n; i++) {
            __asm("SHRD %AX, %BX");
        }
    break;
case 143:
        for (i=1; i< n; i++) {
            __asm("SHRD %AX, %BX");
        }
    break;
case 144:
        for (i=1; i< n; i++) {
            __asm("IMUL %AX, %BX");
        }
    break;
case 145:
        for (i=1; i< n; i++) {
            __asm("BTR %AX, %BX");
        }
    break;
// case 146:
//         for (i=1; i< n; i++) {
//             __asm("POPCNT %AX, %BX" : : : "%ax");
//         }
//     break;
case 146:
        for (i=1; i< n; i++) {
            __asm("BTC %AX, %BX");
        }
    break;
case 147:
        for (i=1; i< n; i++) {
            __asm("BSF %AX, %BX");
        }
    break;
case 148:
        for (i=1; i< n; i++) {
            __asm("BSR %AX, %BX");
        }
    break;
case 149:
        for (i=1; i< n; i++) {
            __asm("XADD %BH, %BL");
        }
    break;
case 150:
        for (i=1; i< n; i++) {
            __asm("XADD %AX, %BX");
        }
    break;