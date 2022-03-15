

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>
#include <linux/perf_event.h>
#include <asm/unistd.h>
#include <inttypes.h>
#include "perftry.h"
#include <errno.h>



void do_loops(int choice) {

    int n = 100000;
    volatile int i;
    volatile int sum;
    volatile long power;
    uint8_t myvar;
    uint16_t myvar16;
    uint32_t myvar32;
    switch(choice)
    {
        #include "assemblyCasesBigger.c"
        case 152:
            for (i = 1; i < n; ++i)
            {   
                sum = i+i;      
            }
            break;
        case 153:
            for (i = 1; i < n; ++i)
            {
                power = pow(2*i,i);       
            }
            break;
        case 154:
            for (i = 1; i < n; ++i)
            {
                __builtin_cpu_is("intel");
            }
            break;
        case 155:
            for (i = 1; i < n; ++i)
            {
                __builtin_cpu_init();
            }
            break;
        case 156:
            for (i = 1; i < n; ++i)
            {
                __builtin_infq();
            }
            break;
        case 157:
        {
            // int lower=0;
            // int upper=100;
            // int values[100];
            // int j;
            // srand(time(0));
            // for (j=0; j<100; j++) {
            //     values[j] = (rand() % (upper-lower+1)) + lower;
            // }
            for (i = 1; i < n; ++i)
            {
                //qsort(values,100,sizeof(int),comparator);
                __builtin_cpu_supports("popcnt");
            }
            break;
        }
        case 158:
            for (i = 1; i < n; ++i)
            {
                // PI = atan2(1, 1) * 4;
                // cplx buf[] = {1, 1, 1, 1, 0, 0, 0, 0};
                // fft(buf, 8);
                //__asm("MOV %BH, %BL");
                __asm("MOV %%BH, %0" : "=r" (myvar));
                //__asm("REX");
            }
            break;
    }
}

struct read_format {
    uint64_t nr;
    struct {
        uint64_t value;
        uint64_t id;
    } values[];
};

static long
perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
                int cpu, int group_fd, unsigned long flags)
{
    int ret;

    ret = syscall(__NR_perf_event_open, hw_event, pid, cpu,
                   group_fd, flags);
    return ret;
}


int measure_operations(char *scenario_name, int scenario_id, int file_desc)
{
    struct perf_event_attr pe;
    long long count;
    int fd, fd2, fd3, fd4,fd5,fd6,fd7,fd8,fd9,fd10;
    //int scenario_id = 0;
    uint64_t id1,id2, id3, id4, id5, id6, id7, id8, id9, id10;
    uint64_t val1,val2, val3, val4, val5, val6, val7, val8, val9, val10;
    char buf[4096];
    struct read_format* rf = (struct read_format*) buf;
    int k;

    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_INSTRUCTIONS;
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd = perf_event_open(&pe, 0, -1, -1, 0);
    if (fd == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd, PERF_EVENT_IOC_ID, &id1);

    // second event
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_CPU_CYCLES;
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd2 = perf_event_open(&pe, 0, -1, fd, 0);
    if (fd2 == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd2, PERF_EVENT_IOC_ID, &id2);

    // third event
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_REF_CPU_CYCLES;
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd3 = perf_event_open(&pe, 0, -1, fd, 0);
    if (fd3 == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd3, PERF_EVENT_IOC_ID, &id3);

    // forth event
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_BRANCH_MISSES; // because PERF_COUNT_HW_CACHE_REFERENCES depends on cpu type, we reject it
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd4 = perf_event_open(&pe, 0, -1, fd, 0);
    if (fd4 == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd4, PERF_EVENT_IOC_ID, &id4);

    // fifth event
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_BUS_CYCLES;
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd5 = perf_event_open(&pe, 0, -1, fd, 0);
    if (fd5 == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd5, PERF_EVENT_IOC_ID, &id5);

    // sixth event
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.disabled = 1;
    pe.exclude_kernel = 0;
    pe.exclude_hv = 1;
    pe.config = PERF_COUNT_HW_BRANCH_INSTRUCTIONS;
    pe.read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;

    fd6 = perf_event_open(&pe, 0, -1, fd, 0);
    if (fd6 == -1) {
       fprintf(stderr, "Error opening leader %llx\n", pe.config);
       exit(EXIT_FAILURE);
    }
    ioctl(fd6, PERF_EVENT_IOC_ID, &id6);

    // seventh event do be added

    // disable interupts
    ioctl(file_desc, IOCTL_DISABLE_INTERUPTS, scenario_id);

    // measure operation
    ioctl(fd, PERF_EVENT_IOC_RESET, PERF_IOC_FLAG_GROUP);
    ioctl(fd, PERF_EVENT_IOC_ENABLE, PERF_IOC_FLAG_GROUP);

    volatile int i,sum;
    do_loops(scenario_id);

    ioctl(fd, PERF_EVENT_IOC_DISABLE, PERF_IOC_FLAG_GROUP);
    // enable interupts
    ioctl(file_desc, IOCTL_ENABLE_INTERUPTS, scenario_id);
    //read(fd, &count, sizeof(long long));
    read(fd, buf, sizeof(buf));
    for(k=0; k< rf->nr; k++) {
        if(rf->values[k].id == id1) {
            val1 = rf ->values[k].value;
        } else if (rf->values[k].id == id2) {
            val2 = rf ->values[k].value;
        } else if (rf->values[k].id == id3) {
            val3 = rf ->values[k].value;
        } else if (rf->values[k].id == id4) {
            val4 = rf ->values[k].value;
        } else if (rf->values[k].id == id5) {
            val5 = rf ->values[k].value;
        } else if (rf->values[k].id == id6) {
            val6 = rf ->values[k].value;
        }
    }

    printf("%"PRIu64",HW_INSTRUCTIONS,%s\n", val1, scenario_name);
    printf("%"PRIu64",CPU_CYCLES,%s\n", val2, scenario_name);
    printf("%"PRIu64",REF_CPU_CYCLES,%s\n", val3, scenario_name);
    printf("%"PRIu64",BRANCH_MISSES,%s\n", val4, scenario_name);
    printf("%"PRIu64",BUS_CYCLES,%s\n", val5, scenario_name);
    printf("%"PRIu64",BRANCH_INSTRUCTIONS,%s\n", val6, scenario_name);
    //printf("%"PRIu64",BRANCH_MISSES,%s\n", val7, scenario_name);
    //printf("%"PRIu64",STALLED_CYCLES_FRONTEND,%s\n", val7, scenario_name);
    //printf("%"PRIu64",STALLED_CYCLES_BACKEND,%s\n", val8, scenario_name);
    // printf("%"PRIu64",STALLED_CYCLES_BACKEND,%s\n", val10, scenario_name);

    close(fd);
}

int main(int argc, char **argv) {
    
    //check();
    char scenarios[][40] = {"ADD_1","ADD_2","ADD_3","ADD_4","ADD_5","ADD_6","OR_7","OR_8","OR_9","OR_10","OR_11","OR_12","ADC_13","ADC_14","ADC_15","ADC_16","ADC_17","ADC_18","SBB_19","SBB_20","SBB_21","SBB_22","SBB_23","SBB_24","AND_25","AND_26","AND_27","AND_28","AND_29","AND_30","SUB_31","SUB_32","SUB_33","SUB_34","SUB_35","SUB_36","XOR_37","XOR_38","XOR_39","XOR_40","XOR_41","XOR_42","CMP_43","CMP_44","CMP_45","CMP_46","CMP_47","CMP_48","IMUL_49","IMUL_50","ADD_51","OR_52","ADC_53","SBB_54","AND_55","SUB_56","XOR_57","CMP_58","ADD_59","OR_60","ADC_61","SBB_62","AND_63","SUB_64","XOR_65","CMP_66","TEST_67","TEST_68","XCHG_69","XCHG_70","MOV_71","MOV_72","MOV_73","MOV_74","TEST_75","TEST_76","ROL_77","ROR_78","RCL_79","RCR_80","SHL_81","SHR_82","SAL_83","SAR_84","MOV_85","MOV_86","ROL_87","ROR_88","RCL_89","RCR_90","SHL_91","SHR_92","SAL_93","SAR_94","ROL_95","ROR_96","RCL_97","RCR_98","SHL_99","SHR_100","SAL_101","SAR_102","ROL_103","ROR_104","RCL_105","RCR_106","SHL_107","SHR_108","SAL_109","SAR_110","ROL_111","ROR_112","RCL_113","RCR_114","SHL_115","SHR_116","SAL_117","SAR_118","TEST_119","TEST_120","TEST_121","TEST_122","CMOVO_123","CMOVNO_124","CMOVB_125","CMOVNB_126","CMOVZ_127","CMOVNZ_128","CMOVBE_129","CMOVNBE_130","CMOVS_131","CMOVNS_132","CMOVP_133","CMOVNP_134","CMOVL_135","CMOVNL_136","CMOVLE_137","CMOVNLE_138","BT_139","SHLD_140","SHLD_141","BTS_142","SHRD_143","SHRD_144","IMUL_145","BTR_146","POPCNT_147","BTC_148","BSF_149","BSR_150","XADD_151","XADD_152","SUM","POWER","built_in","builtin_cpu_init","builtin_infq","builtin_support","assembly"};
    //,"open_close_devnull" add it again 
    int k, file_desc;

    file_desc = open(DEVICE_FILE_NAME, 0);
    if (file_desc < 0) {
        printf("Can not open device: %s\n", DEVICE_FILE_NAME);
        exit(-1);
    }

    for (k=0; k<159; k++) {
        measure_operations(scenarios[k], k, file_desc);
    }

    close(file_desc);
    
    return 0;
}