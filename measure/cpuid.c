#include <stdio.h>

int outputEax(int * binaryNum){
    printf("-------Signature(EAX register):-------");
    printf("\nStepping ID:%d%d%d%d",binaryNum[3],binaryNum[2],binaryNum[1],binaryNum[0]);
    printf("\nModel:%d%d%d%d",binaryNum[7],binaryNum[6],binaryNum[5],binaryNum[4]);
    printf("\nFamily ID:%d%d%d%d",binaryNum[11],binaryNum[10],binaryNum[9],binaryNum[8]);
    printf("\nProcessor Type:%d%d",binaryNum[13],binaryNum[12]);
    printf("\nExtended Model ID:%d%d%d%d",binaryNum[19],binaryNum[18],binaryNum[17],binaryNum[16]);
    printf("\nExtended Family ID:%d%d%d%d%d%d%d%d",binaryNum[27],binaryNum[26],binaryNum[25],binaryNum[24],binaryNum[23],binaryNum[22],binaryNum[21],binaryNum[20]);
    printf("\n");
    return 0;

}

int outputEbx(int * binaryNum){
    printf("-------Signature(EBX register):-------");
    printf("\nBrandIndex:%d%d%d%d%d%d%d%d",binaryNum[7],binaryNum[6],binaryNum[5],binaryNum[4],binaryNum[3],binaryNum[2],binaryNum[1],binaryNum[0]);
    printf("\nCLFLUSH line size:%d%d%d%d%d%d%d%d",binaryNum[15],binaryNum[14],binaryNum[13],binaryNum[12],binaryNum[11],binaryNum[10],binaryNum[9],binaryNum[8]);
    printf("\nMax num of addressable ids:%d%d%d%d%d%d%d%d",binaryNum[23],binaryNum[22],binaryNum[21],binaryNum[20],binaryNum[19],binaryNum[18],binaryNum[17],binaryNum[16]);
    printf("\nLocal APIC ID:%d%d%d%d%d%d%d%d",binaryNum[31],binaryNum[30],binaryNum[29],binaryNum[28],binaryNum[27],binaryNum[26],binaryNum[25],binaryNum[24]);
    printf("\n");
    return 0;

}

int outputEdx(int * binaryNum) {
    printf("-------Signature(EDX register):-------");
    printf("\nOnboard x87 FPU:%d",binaryNum[0]);
    printf("\nVirtual 8086 mode extensions (such as VIF, VIP, PIV):%d",binaryNum[1]);
    printf("\nDebugging extensions (CR4 bit 3):%d",binaryNum[2]);
    printf("\nPage Size Extension:%d",binaryNum[3]);
    printf("\nTime Stamp Counter:%d",binaryNum[4]);
    printf("\nModel-specific registers:%d",binaryNum[5]);
    printf("\nPhysical Address Extension:%d",binaryNum[6]);
    printf("\nMachine Check Exception:%d",binaryNum[7]);
    printf("\nCMPXCHG8 (compare-and-swap) instruction:%d",binaryNum[8]);
    printf("\nOnboard Advanced Programmable Interrupt Controller:%d",binaryNum[9]);
    printf("\nSYSENTER and SYSEXIT instructions:%d",binaryNum[11]);
    printf("\nMemory Type Range Registers:%d",binaryNum[12]);
    printf("\nPage Global Enable bit in CR4:%d",binaryNum[13]);
    printf("\nMachine check architecture:%d",binaryNum[14]);
    printf("\nConditional move and FCMOV instructions:%d",binaryNum[15]);
    printf("\nPage Attribute Table:%d",binaryNum[16]);
    printf("\n36-bit page size extension:%d",binaryNum[17]);
    printf("\nProcessor Serial Number:%d",binaryNum[18]);
    printf("\nCLFLUSH instruction (SSE2):%d",binaryNum[19]);
    printf("\nDebug store: save trace of executed jumps:%d",binaryNum[21]);
    printf("\nOnboard thermal control MSRs for ACPI:%d",binaryNum[22]);
    printf("\nMMX instructions:%d",binaryNum[23]);
    printf("\nFXSAVE, FXRESTOR instructions, CR4 bit 9:%d",binaryNum[24]);
    printf("\nSSE instructions (a.k.a. Katmai New Instructions):%d",binaryNum[25]);
    printf("\nSSE2 instructions:%d",binaryNum[26]);
    printf("\nCPU cache implements self-snoop:%d",binaryNum[27]);
    printf("\nHyper-threading:%d",binaryNum[28]);
    printf("\nThermal monitor automatically limits temperature:%d",binaryNum[29]);
    printf("\nIA64 processor emulating x86:%d",binaryNum[30]);
    printf("\nPending Break Enable (PBE# pin) wakeup capability:%d",binaryNum[31]);
    printf("\n");
    return 0;
}



int outputEcx(int * binaryNum) {
    printf("-------Signature(ECX register):-------");
    printf("\nPrescott New Instructions-SSE3 (PNI):%d",binaryNum[0]);
    printf("\nPCLMULQDQ:%d",binaryNum[1]);
    printf("\n64-bit debug store (edx bit 21):%d",binaryNum[2]);
    printf("\nMONITOR and MWAIT instructions (SSE3):%d",binaryNum[3]);
    printf("\nCPL qualified debug store:%d",binaryNum[4]);
    printf("\nVirtual Machine eXtensions:%d",binaryNum[5]);
    printf("\nSafer Mode Extensions (LaGrande):%d",binaryNum[6]);
    printf("\nEnhanced SpeedStep:%d",binaryNum[7]);
    printf("\nThermal Monitor 2:%d",binaryNum[8]);
    printf("\nSupplemental SSE3 instructions:%d",binaryNum[9]);
    printf("\ncnxt-id:%d",binaryNum[10]);
    printf("\nSilicon Debug interface:%d",binaryNum[11]);
    printf("\nFused multiply-add (FMA3):%d",binaryNum[12]);
    printf("\nCMPXCHG16B instruction:%d",binaryNum[13]);
    printf("\nCan disable sending task priority messages:%d",binaryNum[14]);
    printf("\nPerfmon & debug capability:%d",binaryNum[15]);
    printf("\nProcess context identifiers (CR4 bit 17):%d",binaryNum[17]);
    printf("\nDirect cache access for DMA writes:%d",binaryNum[18]);
    printf("\nSSE4.1 instructions:%d",binaryNum[19]);
    printf("\nsse4.2:%d",binaryNum[20]);
    printf("\nx2APIC:%d",binaryNum[21]);
    printf("\nMOVBE instruction (big-endian):%d",binaryNum[22]);
    printf("\nPOPCNT instruction:%d",binaryNum[23]);
    printf("\nAPIC implements one-shot operation using a TSC deadline value:%d",binaryNum[24]);
    printf("\nAES instruction set:%d",binaryNum[25]);
    printf("\nXSAVE, XRESTOR, XSETBV, XGETBV:%d",binaryNum[26]);
    printf("\nXSAVE enabled by OS:%d",binaryNum[27]);
    printf("\nAdvanced Vector Extensions:%d",binaryNum[28]);
    printf("\nF16C (half-precision) FP feature:%d",binaryNum[29]);
    printf("\nRDRAND (on-chip random number generator) feature:%d",binaryNum[30]);
    printf("\nHypervisor present (always zero on physical CPUs):%d",binaryNum[31]);
    printf("\n");
    return 0;
}

void decToBinary(int n, int regNum)
{
	int binaryNum[32];
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    if (regNum == 0){
    	outputEax(binaryNum);
    } else if (regNum == 1) {
    	outputEbx(binaryNum);
    } else if (regNum == 2) {
		outputEcx(binaryNum);
    } else if (regNum == 3) {
    	outputEdx(binaryNum);
    }
    
}

static inline void native_cpuid(unsigned int *eax, unsigned int *ebx,
                                unsigned int *ecx, unsigned int *edx) {
    asm volatile("cpuid"
        : "=a" (*eax),
          "=b" (*ebx),
          "=c" (*ecx),
          "=d" (*edx)
        : "0" (*eax), "2" (ecx)
        );
}


int main(void) {


    unsigned eax, ebx, ecx, edx;
    eax = 0;
    native_cpuid(&eax, &ebx, &ecx, &edx);

	int man[3];
	__asm__("mov $0x0 , %eax\n\t");
	__asm__("cpuid\n\t");
	__asm__("mov %%ebx, %0\n\t":"=r" (man[0])); //gives model and family
	__asm__("mov %%edx, %0\n\t":"=r" (man[1])); //gives additional feature info
	__asm__("mov %%ecx, %0\n\t":"=r" (man[2])); //feature flags
	
	printf("-------EAX=0: Highest Function Parameter and Manufacturer id-------");	
	printf("\nHighest Function Parameter: %08x", eax);
	printf("\nManufacturer id: %s\n", &man);

	printf("-------EAX=1: Processor Info and Feature Bits-------\n");
    eax = 1;
    native_cpuid(&eax, &ebx, &ecx, &edx);
    printf("-------Signature(EAX register):-------\n");
    printf("stepping %d\n", eax & 0xF);
    printf("model %d\n", (eax >> 4) & 0xF);
    printf("family %d\n", (eax >> 8) & 0xF);
    printf("processor type %d\n", (eax >> 12) & 0x3);
    printf("extended model %d\n", (eax >> 16) & 0xF);
    printf("extended family %d\n", (eax >> 20) & 0xFF);
    printf("-------Signature(EBX register):-------\n");
    printf("Brand index %d\n", ebx & 0xFF);
    printf("CLFLUSH line size %d\n", (ebx >> 8) & 0xFF);
    printf("Max num of addressable ids %d\n", (ebx >> 16) & 0xFF);
    printf("Local APIC ID %d\n", (ebx >> 24) & 0xFF);
    printf("-------Signature(EDX register):-------");
    printf("\nOnboard x87 FPU:%d",edx &0x1);
    printf("\nVirtual 8086 mode extensions (such as VIF, VIP, PIV):%d",(edx >> 1) &0x1);
    printf("\nDebugging extensions (CR4 bit 3):%d",(edx >> 2) &0x1);
    printf("\nPage Size Extension:%d",(edx >> 3) &0x1);
    printf("\nTime Stamp Counter:%d",(edx >> 4) &0x1);
    printf("\nModel-specific registers:%d",(edx >> 5) &0x1);
    printf("\nPhysical Address Extension:%d",(edx >> 6) &0x1);
    printf("\nMachine Check Exception:%d",(edx >> 7) &0x1);
    printf("\nCMPXCHG8 (compare-and-swap) instruction:%d",(edx >> 8) &0x1);
    printf("\nOnboard Advanced Programmable Interrupt Controller:%d",(edx >> 9) &0x1);
    
    



	printf("-------EAX=2: Cache and TLB Descriptor-------\n");
    eax = 2;
    native_cpuid(&eax, &ebx, &ecx, &edx);
    printf("Cache and TLB: %08x%08x%08x%08x\n", eax, ebx, ecx,edx);

    printf("-------EAX=3: Processor serial number-------\n");
    eax=3;
    native_cpuid(&eax, &ebx, &ecx, &edx);
    printf("Processor serial number: %08x%08x\n", edx, ecx);

    printf("-------EAX=6: thermal and power management-------\n");
    eax=6;
    native_cpuid(&eax, &ebx, &ecx, &edx);
    printf("Processor serial number: %08x%08x\n", edx, ecx);
    printf("-------Signature(EAX register):-------\n");
    printf("Digital thermal sensor:%d\n",eax &0x1);
    printf("Turbo boost:%d\n",(eax >> 1) &0x1);
    printf("Always running:%d\n",(eax >> 2) &0x1);
    printf("power limit:%d\n",(eax >> 4) &0x1);
    printf("ECMD:%d\n",(eax >> 5) &0x1);
    printf("PTM:%d\n",(eax >> 6) &0x1);




}


