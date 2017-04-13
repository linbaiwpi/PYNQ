#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definitions for bus frequencies */
#define XPAR_CPU_M_AXI_DP_FREQ_HZ 100000000
/******************************************************************/

/* Canonical definitions for bus frequencies */
/******************************************************************/

#define XPAR_CPU_CORE_CLOCK_FREQ_HZ 100000000
#define XPAR_MICROBLAZE_CORE_CLOCK_FREQ_HZ 100000000

/******************************************************************/


/* Definitions for peripheral IOP1_MB */
#define XPAR_IOP1_MB_ADDR_SIZE 32
#define XPAR_IOP1_MB_ADDR_TAG_BITS 17
#define XPAR_IOP1_MB_ALLOW_DCACHE_WR 1
#define XPAR_IOP1_MB_ALLOW_ICACHE_WR 1
#define XPAR_IOP1_MB_AREA_OPTIMIZED 0
#define XPAR_IOP1_MB_ASYNC_INTERRUPT 1
#define XPAR_IOP1_MB_ASYNC_WAKEUP 3
#define XPAR_IOP1_MB_AVOID_PRIMITIVES 0
#define XPAR_IOP1_MB_BASE_VECTORS 0x0000000000000000
#define XPAR_IOP1_MB_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_IOP1_MB_CACHE_BYTE_SIZE 8192
#define XPAR_IOP1_MB_DADDR_SIZE 32
#define XPAR_IOP1_MB_DATA_SIZE 32
#define XPAR_IOP1_MB_DCACHE_ADDR_TAG 17
#define XPAR_IOP1_MB_DCACHE_ALWAYS_USED 0
#define XPAR_IOP1_MB_DCACHE_BASEADDR 0x00000000
#define XPAR_IOP1_MB_DCACHE_BYTE_SIZE 8192
#define XPAR_IOP1_MB_DCACHE_DATA_WIDTH 0
#define XPAR_IOP1_MB_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_IOP1_MB_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_IOP1_MB_DCACHE_LINE_LEN 4
#define XPAR_IOP1_MB_DCACHE_USE_WRITEBACK 0
#define XPAR_IOP1_MB_DCACHE_VICTIMS 0
#define XPAR_IOP1_MB_DC_AXI_MON 0
#define XPAR_IOP1_MB_DEBUG_COUNTER_WIDTH 32
#define XPAR_IOP1_MB_DEBUG_ENABLED 1
#define XPAR_IOP1_MB_DEBUG_EVENT_COUNTERS 5
#define XPAR_IOP1_MB_DEBUG_EXTERNAL_TRACE 0
#define XPAR_IOP1_MB_DEBUG_LATENCY_COUNTERS 1
#define XPAR_IOP1_MB_DEBUG_PROFILE_SIZE 0
#define XPAR_IOP1_MB_DEBUG_TRACE_SIZE 8192
#define XPAR_IOP1_MB_DIV_ZERO_EXCEPTION 0
#define XPAR_IOP1_MB_DP_AXI_MON 0
#define XPAR_IOP1_MB_DYNAMIC_BUS_SIZING 0
#define XPAR_IOP1_MB_D_AXI 1
#define XPAR_IOP1_MB_D_LMB 1
#define XPAR_IOP1_MB_D_LMB_MON 0
#define XPAR_IOP1_MB_ECC_USE_CE_EXCEPTION 0
#define XPAR_IOP1_MB_EDGE_IS_POSITIVE 1
#define XPAR_IOP1_MB_ENABLE_DISCRETE_PORTS 0
#define XPAR_IOP1_MB_ENDIANNESS 1
#define XPAR_IOP1_MB_FAULT_TOLERANT 0
#define XPAR_IOP1_MB_FPU_EXCEPTION 0
#define XPAR_IOP1_MB_FREQ 100000000
#define XPAR_IOP1_MB_FSL_EXCEPTION 0
#define XPAR_IOP1_MB_FSL_LINKS 1
#define XPAR_IOP1_MB_IADDR_SIZE 32
#define XPAR_IOP1_MB_ICACHE_ALWAYS_USED 0
#define XPAR_IOP1_MB_ICACHE_BASEADDR 0x00000000
#define XPAR_IOP1_MB_ICACHE_DATA_WIDTH 0
#define XPAR_IOP1_MB_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_IOP1_MB_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_IOP1_MB_ICACHE_LINE_LEN 4
#define XPAR_IOP1_MB_ICACHE_STREAMS 0
#define XPAR_IOP1_MB_ICACHE_VICTIMS 0
#define XPAR_IOP1_MB_IC_AXI_MON 0
#define XPAR_IOP1_MB_ILL_OPCODE_EXCEPTION 0
#define XPAR_IOP1_MB_IMPRECISE_EXCEPTIONS 0
#define XPAR_IOP1_MB_INSTR_SIZE 32
#define XPAR_IOP1_MB_INTERCONNECT 2
#define XPAR_IOP1_MB_INTERRUPT_IS_EDGE 0
#define XPAR_IOP1_MB_INTERRUPT_MON 0
#define XPAR_IOP1_MB_IP_AXI_MON 0
#define XPAR_IOP1_MB_I_AXI 0
#define XPAR_IOP1_MB_I_LMB 1
#define XPAR_IOP1_MB_I_LMB_MON 0
#define XPAR_IOP1_MB_LOCKSTEP_SELECT 0
#define XPAR_IOP1_MB_LOCKSTEP_SLAVE 0
#define XPAR_IOP1_MB_M0_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M0_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M1_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M1_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M2_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M2_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M3_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M3_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M4_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M4_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M5_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M5_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M6_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M6_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M7_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M7_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M8_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M8_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M9_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M9_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M10_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M10_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M11_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M11_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M12_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M12_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M13_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M13_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M14_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M14_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_M15_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_M15_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_MMU_DTLB_SIZE 4
#define XPAR_IOP1_MB_MMU_ITLB_SIZE 2
#define XPAR_IOP1_MB_MMU_PRIVILEGED_INSTR 0
#define XPAR_IOP1_MB_MMU_TLB_ACCESS 3
#define XPAR_IOP1_MB_MMU_ZONES 16
#define XPAR_IOP1_MB_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_IOP1_MB_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_IOP1_MB_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_DC_DATA_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_IOP1_MB_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_DC_USER_SIGNALS 0
#define XPAR_IOP1_MB_M_AXI_DC_USER_VALUE 31
#define XPAR_IOP1_MB_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_DP_DATA_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_IOP1_MB_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_IOP1_MB_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_IOP1_MB_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_IOP1_MB_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_IC_DATA_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_IC_USER_SIGNALS 0
#define XPAR_IOP1_MB_M_AXI_IC_USER_VALUE 31
#define XPAR_IOP1_MB_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_IP_DATA_WIDTH 32
#define XPAR_IOP1_MB_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_IOP1_MB_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_IOP1_MB_NUMBER_OF_PC_BRK 1
#define XPAR_IOP1_MB_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_IOP1_MB_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_IOP1_MB_NUM_SYNC_FF_CLK 2
#define XPAR_IOP1_MB_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_IOP1_MB_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_IOP1_MB_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_IOP1_MB_OPCODE_0X0_ILLEGAL 0
#define XPAR_IOP1_MB_OPTIMIZATION 0
#define XPAR_IOP1_MB_PC_WIDTH 32
#define XPAR_IOP1_MB_PVR 0
#define XPAR_IOP1_MB_PVR_USER1 0x00
#define XPAR_IOP1_MB_PVR_USER2 0x00000000
#define XPAR_IOP1_MB_RESET_MSR 0x00000000
#define XPAR_IOP1_MB_S0_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S0_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S1_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S1_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S2_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S2_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S3_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S3_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S4_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S4_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S5_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S5_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S6_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S6_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S7_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S7_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S8_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S8_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S9_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S9_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S10_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S10_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S11_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S11_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S12_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S12_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S13_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S13_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S14_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S14_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_S15_AXIS_DATA_WIDTH 32
#define XPAR_IOP1_MB_S15_AXIS_PROTOCOL GENERIC
#define XPAR_IOP1_MB_SCO 0
#define XPAR_IOP1_MB_TRACE 0
#define XPAR_IOP1_MB_UNALIGNED_EXCEPTIONS 0
#define XPAR_IOP1_MB_USE_BARREL 0
#define XPAR_IOP1_MB_USE_BRANCH_TARGET_CACHE 0
#define XPAR_IOP1_MB_USE_CONFIG_RESET 0
#define XPAR_IOP1_MB_USE_DCACHE 0
#define XPAR_IOP1_MB_USE_DIV 0
#define XPAR_IOP1_MB_USE_EXTENDED_FSL_INSTR 1
#define XPAR_IOP1_MB_USE_EXT_BRK 0
#define XPAR_IOP1_MB_USE_EXT_NM_BRK 0
#define XPAR_IOP1_MB_USE_FPU 0
#define XPAR_IOP1_MB_USE_HW_MUL 0
#define XPAR_IOP1_MB_USE_ICACHE 0
#define XPAR_IOP1_MB_USE_INTERRUPT 1
#define XPAR_IOP1_MB_USE_MMU 0
#define XPAR_IOP1_MB_USE_MSR_INSTR 0
#define XPAR_IOP1_MB_USE_NON_SECURE 0
#define XPAR_IOP1_MB_USE_PCMP_INSTR 0
#define XPAR_IOP1_MB_USE_REORDER_INSTR 1
#define XPAR_IOP1_MB_USE_STACK_PROTECTION 0
#define XPAR_IOP1_MB_COMPONENT_NAME system_mb_0
#define XPAR_IOP1_MB_EDK_IPTYPE PROCESSOR
#define XPAR_IOP1_MB_EDK_SPECIAL microblaze
#define XPAR_IOP1_MB_G_TEMPLATE_LIST 0
#define XPAR_IOP1_MB_G_USE_EXCEPTIONS 0

/******************************************************************/

#define XPAR_CPU_ID 0
#define XPAR_MICROBLAZE_ID 0
#define XPAR_MICROBLAZE_ADDR_SIZE 32
#define XPAR_MICROBLAZE_ADDR_TAG_BITS 17
#define XPAR_MICROBLAZE_ALLOW_DCACHE_WR 1
#define XPAR_MICROBLAZE_ALLOW_ICACHE_WR 1
#define XPAR_MICROBLAZE_AREA_OPTIMIZED 0
#define XPAR_MICROBLAZE_ASYNC_INTERRUPT 1
#define XPAR_MICROBLAZE_ASYNC_WAKEUP 3
#define XPAR_MICROBLAZE_AVOID_PRIMITIVES 0
#define XPAR_MICROBLAZE_BASE_VECTORS 0x0000000000000000
#define XPAR_MICROBLAZE_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_MICROBLAZE_CACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DADDR_SIZE 32
#define XPAR_MICROBLAZE_DATA_SIZE 32
#define XPAR_MICROBLAZE_DCACHE_ADDR_TAG 17
#define XPAR_MICROBLAZE_DCACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_DCACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_DCACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DCACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_DCACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_DCACHE_USE_WRITEBACK 0
#define XPAR_MICROBLAZE_DCACHE_VICTIMS 0
#define XPAR_MICROBLAZE_DC_AXI_MON 0
#define XPAR_MICROBLAZE_DEBUG_COUNTER_WIDTH 32
#define XPAR_MICROBLAZE_DEBUG_ENABLED 1
#define XPAR_MICROBLAZE_DEBUG_EVENT_COUNTERS 5
#define XPAR_MICROBLAZE_DEBUG_EXTERNAL_TRACE 0
#define XPAR_MICROBLAZE_DEBUG_LATENCY_COUNTERS 1
#define XPAR_MICROBLAZE_DEBUG_PROFILE_SIZE 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_SIZE 8192
#define XPAR_MICROBLAZE_DIV_ZERO_EXCEPTION 0
#define XPAR_MICROBLAZE_DP_AXI_MON 0
#define XPAR_MICROBLAZE_DYNAMIC_BUS_SIZING 0
#define XPAR_MICROBLAZE_D_AXI 1
#define XPAR_MICROBLAZE_D_LMB 1
#define XPAR_MICROBLAZE_D_LMB_MON 0
#define XPAR_MICROBLAZE_ECC_USE_CE_EXCEPTION 0
#define XPAR_MICROBLAZE_EDGE_IS_POSITIVE 1
#define XPAR_MICROBLAZE_ENABLE_DISCRETE_PORTS 0
#define XPAR_MICROBLAZE_ENDIANNESS 1
#define XPAR_MICROBLAZE_FAULT_TOLERANT 0
#define XPAR_MICROBLAZE_FPU_EXCEPTION 0
#define XPAR_MICROBLAZE_FREQ 100000000
#define XPAR_MICROBLAZE_FSL_EXCEPTION 0
#define XPAR_MICROBLAZE_FSL_LINKS 1
#define XPAR_MICROBLAZE_IADDR_SIZE 32
#define XPAR_MICROBLAZE_ICACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_ICACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_ICACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_ICACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_ICACHE_STREAMS 0
#define XPAR_MICROBLAZE_ICACHE_VICTIMS 0
#define XPAR_MICROBLAZE_IC_AXI_MON 0
#define XPAR_MICROBLAZE_ILL_OPCODE_EXCEPTION 0
#define XPAR_MICROBLAZE_IMPRECISE_EXCEPTIONS 0
#define XPAR_MICROBLAZE_INSTR_SIZE 32
#define XPAR_MICROBLAZE_INTERCONNECT 2
#define XPAR_MICROBLAZE_INTERRUPT_IS_EDGE 0
#define XPAR_MICROBLAZE_INTERRUPT_MON 0
#define XPAR_MICROBLAZE_IP_AXI_MON 0
#define XPAR_MICROBLAZE_I_AXI 0
#define XPAR_MICROBLAZE_I_LMB 1
#define XPAR_MICROBLAZE_I_LMB_MON 0
#define XPAR_MICROBLAZE_LOCKSTEP_SELECT 0
#define XPAR_MICROBLAZE_LOCKSTEP_SLAVE 0
#define XPAR_MICROBLAZE_M0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_MMU_DTLB_SIZE 4
#define XPAR_MICROBLAZE_MMU_ITLB_SIZE 2
#define XPAR_MICROBLAZE_MMU_PRIVILEGED_INSTR 0
#define XPAR_MICROBLAZE_MMU_TLB_ACCESS 3
#define XPAR_MICROBLAZE_MMU_ZONES 16
#define XPAR_MICROBLAZE_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_DC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_IC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_NUMBER_OF_PC_BRK 1
#define XPAR_MICROBLAZE_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_MICROBLAZE_OPCODE_0X0_ILLEGAL 0
#define XPAR_MICROBLAZE_OPTIMIZATION 0
#define XPAR_MICROBLAZE_PC_WIDTH 32
#define XPAR_MICROBLAZE_PVR 0
#define XPAR_MICROBLAZE_PVR_USER1 0x00
#define XPAR_MICROBLAZE_PVR_USER2 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR 0x00000000
#define XPAR_MICROBLAZE_S0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_SCO 0
#define XPAR_MICROBLAZE_TRACE 0
#define XPAR_MICROBLAZE_UNALIGNED_EXCEPTIONS 0
#define XPAR_MICROBLAZE_USE_BARREL 0
#define XPAR_MICROBLAZE_USE_BRANCH_TARGET_CACHE 0
#define XPAR_MICROBLAZE_USE_CONFIG_RESET 0
#define XPAR_MICROBLAZE_USE_DCACHE 0
#define XPAR_MICROBLAZE_USE_DIV 0
#define XPAR_MICROBLAZE_USE_EXTENDED_FSL_INSTR 1
#define XPAR_MICROBLAZE_USE_EXT_BRK 0
#define XPAR_MICROBLAZE_USE_EXT_NM_BRK 0
#define XPAR_MICROBLAZE_USE_FPU 0
#define XPAR_MICROBLAZE_USE_HW_MUL 0
#define XPAR_MICROBLAZE_USE_ICACHE 0
#define XPAR_MICROBLAZE_USE_INTERRUPT 1
#define XPAR_MICROBLAZE_USE_MMU 0
#define XPAR_MICROBLAZE_USE_MSR_INSTR 0
#define XPAR_MICROBLAZE_USE_NON_SECURE 0
#define XPAR_MICROBLAZE_USE_PCMP_INSTR 0
#define XPAR_MICROBLAZE_USE_REORDER_INSTR 1
#define XPAR_MICROBLAZE_USE_STACK_PROTECTION 0
#define XPAR_MICROBLAZE_COMPONENT_NAME system_mb_0
#define XPAR_MICROBLAZE_EDK_IPTYPE PROCESSOR
#define XPAR_MICROBLAZE_EDK_SPECIAL microblaze
#define XPAR_MICROBLAZE_G_TEMPLATE_LIST 0
#define XPAR_MICROBLAZE_G_USE_EXCEPTIONS 0

/******************************************************************/


/******************************************************************/

/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR */
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_DEVICE_ID 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_DATA_WIDTH 32
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_ECC 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_FAULT_INJECT 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_CE_FAILING_REGISTERS 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_UE_FAILING_REGISTERS 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_ECC_STATUS_REGISTERS 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_CE_COUNTER_WIDTH 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_ECC_ONOFF_REGISTER 0
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_ECC_ONOFF_RESET_VALUE 1
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_WRITE_ACCESS 2
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_BASEADDR 0x00000000
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_HIGHADDR 0x0000FFFF
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_S_AXI_CTRL_BASEADDR 0xFFFFFFFF 
#define XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_S_AXI_CTRL_HIGHADDR 0xFFFFFFFF 


/******************************************************************/

/* Canonical definitions for peripheral IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR */
#define XPAR_BRAM_0_DEVICE_ID XPAR_IOP1_MB1_LMB_LMB_BRAM_IF_CNTLR_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 32
#define XPAR_BRAM_0_ECC 0
#define XPAR_BRAM_0_FAULT_INJECT 0
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 1
#define XPAR_BRAM_0_WRITE_ACCESS 2
#define XPAR_BRAM_0_BASEADDR 0x00000000
#define XPAR_BRAM_0_HIGHADDR 0x0000FFFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 5

/* Definitions for peripheral BTNS_GPIO */
#define XPAR_BTNS_GPIO_BASEADDR 0x41210000
#define XPAR_BTNS_GPIO_HIGHADDR 0x4121FFFF
#define XPAR_BTNS_GPIO_DEVICE_ID 0
#define XPAR_BTNS_GPIO_INTERRUPT_PRESENT 1
#define XPAR_BTNS_GPIO_IS_DUAL 0


/* Definitions for peripheral IOP1_MB1_GPIO */
#define XPAR_IOP1_MB1_GPIO_BASEADDR 0x40000000
#define XPAR_IOP1_MB1_GPIO_HIGHADDR 0x4000FFFF
#define XPAR_IOP1_MB1_GPIO_DEVICE_ID 1
#define XPAR_IOP1_MB1_GPIO_INTERRUPT_PRESENT 0
#define XPAR_IOP1_MB1_GPIO_IS_DUAL 1


/* Definitions for peripheral IOP1_MB1_INTR */
#define XPAR_IOP1_MB1_INTR_BASEADDR 0x40010000
#define XPAR_IOP1_MB1_INTR_HIGHADDR 0x4001FFFF
#define XPAR_IOP1_MB1_INTR_DEVICE_ID 2
#define XPAR_IOP1_MB1_INTR_INTERRUPT_PRESENT 0
#define XPAR_IOP1_MB1_INTR_IS_DUAL 0


/* Definitions for peripheral RGBLEDS_GPIO */
#define XPAR_RGBLEDS_GPIO_BASEADDR 0x41240000
#define XPAR_RGBLEDS_GPIO_HIGHADDR 0x4124FFFF
#define XPAR_RGBLEDS_GPIO_DEVICE_ID 3
#define XPAR_RGBLEDS_GPIO_INTERRUPT_PRESENT 0
#define XPAR_RGBLEDS_GPIO_IS_DUAL 0


/* Definitions for peripheral SWSLEDS_GPIO */
#define XPAR_SWSLEDS_GPIO_BASEADDR 0x41200000
#define XPAR_SWSLEDS_GPIO_HIGHADDR 0x4120FFFF
#define XPAR_SWSLEDS_GPIO_DEVICE_ID 4
#define XPAR_SWSLEDS_GPIO_INTERRUPT_PRESENT 1
#define XPAR_SWSLEDS_GPIO_IS_DUAL 1


/******************************************************************/

/* Canonical definitions for peripheral BTNS_GPIO */
#define XPAR_GPIO_0_BASEADDR 0x41210000
#define XPAR_GPIO_0_HIGHADDR 0x4121FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_BTNS_GPIO_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 1
#define XPAR_GPIO_0_IS_DUAL 0

/* Canonical definitions for peripheral IOP1_MB1_GPIO */
#define XPAR_GPIO_1_BASEADDR 0x40000000
#define XPAR_GPIO_1_HIGHADDR 0x4000FFFF
#define XPAR_GPIO_1_DEVICE_ID XPAR_IOP1_MB1_GPIO_DEVICE_ID
#define XPAR_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_GPIO_1_IS_DUAL 1

/* Canonical definitions for peripheral IOP1_MB1_INTR */
#define XPAR_GPIO_2_BASEADDR 0x40010000
#define XPAR_GPIO_2_HIGHADDR 0x4001FFFF
#define XPAR_GPIO_2_DEVICE_ID XPAR_IOP1_MB1_INTR_DEVICE_ID
#define XPAR_GPIO_2_INTERRUPT_PRESENT 0
#define XPAR_GPIO_2_IS_DUAL 0

/* Canonical definitions for peripheral RGBLEDS_GPIO */
#define XPAR_GPIO_3_BASEADDR 0x41240000
#define XPAR_GPIO_3_HIGHADDR 0x4124FFFF
#define XPAR_GPIO_3_DEVICE_ID XPAR_RGBLEDS_GPIO_DEVICE_ID
#define XPAR_GPIO_3_INTERRUPT_PRESENT 0
#define XPAR_GPIO_3_IS_DUAL 0

/* Canonical definitions for peripheral SWSLEDS_GPIO */
#define XPAR_GPIO_4_BASEADDR 0x41200000
#define XPAR_GPIO_4_HIGHADDR 0x4120FFFF
#define XPAR_GPIO_4_DEVICE_ID XPAR_SWSLEDS_GPIO_DEVICE_ID
#define XPAR_GPIO_4_INTERRUPT_PRESENT 1
#define XPAR_GPIO_4_IS_DUAL 1


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_IIC */
#define XPAR_IOP1_MB1_IIC_DEVICE_ID 0
#define XPAR_IOP1_MB1_IIC_BASEADDR 0x40800000
#define XPAR_IOP1_MB1_IIC_HIGHADDR 0x4080FFFF
#define XPAR_IOP1_MB1_IIC_TEN_BIT_ADR 0
#define XPAR_IOP1_MB1_IIC_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral IOP1_MB1_IIC */
#define XPAR_IIC_0_DEVICE_ID XPAR_IOP1_MB1_IIC_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x40800000
#define XPAR_IIC_0_HIGHADDR 0x4080FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1


/******************************************************************/

#define XPAR_INTC_MAX_NUM_INTR_INPUTS 3
#define XPAR_XINTC_HAS_IPR 1
#define XPAR_XINTC_HAS_SIE 1
#define XPAR_XINTC_HAS_CIE 1
#define XPAR_XINTC_HAS_IVR 1
/* Definitions for driver INTC */
#define XPAR_XINTC_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_INTC */
#define XPAR_IOP1_MB1_INTC_DEVICE_ID 0
#define XPAR_IOP1_MB1_INTC_BASEADDR 0x41300000
#define XPAR_IOP1_MB1_INTC_HIGHADDR 0x4130FFFF
#define XPAR_IOP1_MB1_INTC_KIND_OF_INTR 0xFFFFFFFA
#define XPAR_IOP1_MB1_INTC_HAS_FAST 0
#define XPAR_IOP1_MB1_INTC_IVAR_RESET_VALUE 0x00000010
#define XPAR_IOP1_MB1_INTC_NUM_INTR_INPUTS 3


/******************************************************************/

#define XPAR_INTC_SINGLE_BASEADDR 0x41300000
#define XPAR_INTC_SINGLE_HIGHADDR 0x4130FFFF
#define XPAR_INTC_SINGLE_DEVICE_ID XPAR_IOP1_MB1_INTC_DEVICE_ID
#define XPAR_IOP1_MB1_INTC_TYPE 0
#define XPAR_IOP1_MB1_IIC_IIC2INTC_IRPT_MASK 0X000001
#define XPAR_IOP1_MB1_INTC_IOP1_MB1_IIC_IIC2INTC_IRPT_INTR 0
#define XPAR_IOP1_MB1_SPI_IP2INTC_IRPT_MASK 0X000002
#define XPAR_IOP1_MB1_INTC_IOP1_MB1_SPI_IP2INTC_IRPT_INTR 1
#define XPAR_IOP1_MB1_TIMER_INTERRUPT_MASK 0X000004
#define XPAR_IOP1_MB1_INTC_IOP1_MB1_TIMER_INTERRUPT_INTR 2

/******************************************************************/

/* Canonical definitions for peripheral IOP1_MB1_INTC */
#define XPAR_INTC_0_DEVICE_ID XPAR_IOP1_MB1_INTC_DEVICE_ID
#define XPAR_INTC_0_BASEADDR 0x41300000
#define XPAR_INTC_0_HIGHADDR 0x4130FFFF
#define XPAR_INTC_0_KIND_OF_INTR 0xFFFFFFFA
#define XPAR_INTC_0_HAS_FAST 0
#define XPAR_INTC_0_IVAR_RESET_VALUE 0x00000010
#define XPAR_INTC_0_NUM_INTR_INPUTS 3
#define XPAR_INTC_0_INTC_TYPE 0

#define XPAR_INTC_0_IIC_0_VEC_ID XPAR_IOP1_MB1_INTC_IOP1_MB1_IIC_IIC2INTC_IRPT_INTR
#define XPAR_INTC_0_SPI_0_VEC_ID XPAR_IOP1_MB1_INTC_IOP1_MB1_SPI_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_TMRCTR_0_VEC_ID XPAR_IOP1_MB1_INTC_IOP1_MB1_TIMER_INTERRUPT_INTR

/******************************************************************/

/* Definitions for driver PMOD_IO_SWITCH */
#define XPAR_PMOD_IO_SWITCH_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_PMOD_IO_SWITCH */
#define XPAR_IOP1_MB1_PMOD_IO_SWITCH_DEVICE_ID 0
#define XPAR_IOP1_MB1_PMOD_IO_SWITCH_S00_AXI_BASEADDR 0x44A00000
#define XPAR_IOP1_MB1_PMOD_IO_SWITCH_S00_AXI_HIGHADDR 0x44A0FFFF


/******************************************************************/

/* Definitions for driver SPI */
#define XPAR_XSPI_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_SPI */
#define XPAR_IOP1_MB1_SPI_DEVICE_ID 0
#define XPAR_IOP1_MB1_SPI_BASEADDR 0x44A10000
#define XPAR_IOP1_MB1_SPI_HIGHADDR 0x44A1FFFF
#define XPAR_IOP1_MB1_SPI_FIFO_DEPTH 16
#define XPAR_IOP1_MB1_SPI_FIFO_EXIST 1
#define XPAR_IOP1_MB1_SPI_SPI_SLAVE_ONLY 0
#define XPAR_IOP1_MB1_SPI_NUM_SS_BITS 1
#define XPAR_IOP1_MB1_SPI_NUM_TRANSFER_BITS 8
#define XPAR_IOP1_MB1_SPI_SPI_MODE 0
#define XPAR_IOP1_MB1_SPI_TYPE_OF_AXI4_INTERFACE 0
#define XPAR_IOP1_MB1_SPI_AXI4_BASEADDR 0
#define XPAR_IOP1_MB1_SPI_AXI4_HIGHADDR 0
#define XPAR_IOP1_MB1_SPI_XIP_MODE 0

/* Canonical definitions for peripheral IOP1_MB1_SPI */
#define XPAR_SPI_0_DEVICE_ID 0
#define XPAR_SPI_0_BASEADDR 0x44A10000
#define XPAR_SPI_0_HIGHADDR 0x44A1FFFF
#define XPAR_SPI_0_FIFO_DEPTH 16
#define XPAR_SPI_0_FIFO_EXIST 1
#define XPAR_SPI_0_SPI_SLAVE_ONLY 0
#define XPAR_SPI_0_NUM_SS_BITS 1
#define XPAR_SPI_0_NUM_TRANSFER_BITS 8
#define XPAR_SPI_0_SPI_MODE 0
#define XPAR_SPI_0_TYPE_OF_AXI4_INTERFACE 0
#define XPAR_SPI_0_AXI4_BASEADDR 0
#define XPAR_SPI_0_AXI4_HIGHADDR 0
#define XPAR_SPI_0_XIP_MODE 0
#define XPAR_SPI_0_USE_STARTUP 0



/******************************************************************/

/* Definitions for driver TMRCTR */
#define XPAR_XTMRCTR_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_MB1_TIMER */
#define XPAR_IOP1_MB1_TIMER_DEVICE_ID 0
#define XPAR_IOP1_MB1_TIMER_BASEADDR 0x41C00000
#define XPAR_IOP1_MB1_TIMER_HIGHADDR 0x41C0FFFF
#define XPAR_IOP1_MB1_TIMER_CLOCK_FREQ_HZ 100000000


/******************************************************************/

/* Canonical definitions for peripheral IOP1_MB1_TIMER */
#define XPAR_TMRCTR_0_DEVICE_ID 0
#define XPAR_TMRCTR_0_BASEADDR 0x41C00000
#define XPAR_TMRCTR_0_HIGHADDR 0x41C0FFFF
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_IOP1_MB1_TIMER_CLOCK_FREQ_HZ

/******************************************************************/

/* Definitions for driver VECTORBLOX_MXP */
#define XPAR_VECTORBLOX_MXP_NUM_INSTANCES 1

/* Definitions for peripheral IOP1_VECTORBLOX_MXP_0 */
#define XPAR_IOP1_VECTORBLOX_MXP_0_DEVICE_ID 0
#define XPAR_IOP1_VECTORBLOX_MXP_0_S_AXI_BASEADDR 0x76000000
#define XPAR_IOP1_VECTORBLOX_MXP_0_S_AXI_HIGHADDR 0x7601FFFF
#define XPAR_IOP1_VECTORBLOX_MXP_0_VECTOR_LANES 2
#define XPAR_IOP1_VECTORBLOX_MXP_0_MAX_MASKED_WAVES 128
#define XPAR_IOP1_VECTORBLOX_MXP_0_MASK_PARTITIONS 0
#define XPAR_IOP1_VECTORBLOX_MXP_0_SCRATCHPAD_KB 64
#define XPAR_IOP1_VECTORBLOX_MXP_0_M_AXI_DATA_WIDTH 64
#define XPAR_IOP1_VECTORBLOX_MXP_0_FIXED_POINT_SUPPORT 0
#define XPAR_IOP1_VECTORBLOX_MXP_0_MULFXP_WORD_FRACTION_BITS 16
#define XPAR_IOP1_VECTORBLOX_MXP_0_MULFXP_HALF_FRACTION_BITS 15
#define XPAR_IOP1_VECTORBLOX_MXP_0_MULFXP_BYTE_FRACTION_BITS 4
#define XPAR_IOP1_VECTORBLOX_MXP_0_S_AXI_INSTR_BASEADDR 0xFFFFFFFF
#define XPAR_IOP1_VECTORBLOX_MXP_0_VECTOR_CUSTOM_INSTRUCTIONS 0
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_0_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_0_OPCODE_START 0
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_0_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_1_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_1_OPCODE_START 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_1_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_2_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_2_OPCODE_START 2
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_2_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_3_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_3_OPCODE_START 3
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_3_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_4_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_4_OPCODE_START 4
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_4_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_5_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_5_OPCODE_START 5
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_5_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_6_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_6_OPCODE_START 6
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_6_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_7_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_7_OPCODE_START 7
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_7_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_8_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_8_OPCODE_START 8
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_8_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_9_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_9_OPCODE_START 9
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_9_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_10_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_10_OPCODE_START 10
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_10_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_11_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_11_OPCODE_START 11
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_11_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_12_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_12_OPCODE_START 12
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_12_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_13_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_13_OPCODE_START 13
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_13_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_14_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_14_OPCODE_START 14
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_14_FUNCTIONS 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_15_LANES 1
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_15_OPCODE_START 15
#define XPAR_IOP1_VECTORBLOX_MXP_0_VCI_15_FUNCTIONS 1


/******************************************************************/

/* Canonical definitions for peripheral IOP1_VECTORBLOX_MXP_0 */
#define XPAR_VECTORBLOX_MXP_0_DEVICE_ID XPAR_IOP1_VECTORBLOX_MXP_0_DEVICE_ID
#define XPAR_VECTORBLOX_MXP_0_S_AXI_BASEADDR 0x76000000
#define XPAR_VECTORBLOX_MXP_0_S_AXI_HIGHADDR 0x7601FFFF
#define XPAR_VECTORBLOX_MXP_0_VECTOR_LANES 2
#define XPAR_VECTORBLOX_MXP_0_MAX_MASKED_WAVES 128
#define XPAR_VECTORBLOX_MXP_0_MASK_PARTITIONS 0
#define XPAR_VECTORBLOX_MXP_0_SCRATCHPAD_KB 64
#define XPAR_VECTORBLOX_MXP_0_M_AXI_DATA_WIDTH 64
#define XPAR_VECTORBLOX_MXP_0_FIXED_POINT_SUPPORT 0
#define XPAR_VECTORBLOX_MXP_0_MULFXP_WORD_FRACTION_BITS 16
#define XPAR_VECTORBLOX_MXP_0_MULFXP_HALF_FRACTION_BITS 15
#define XPAR_VECTORBLOX_MXP_0_MULFXP_BYTE_FRACTION_BITS 4
#define XPAR_VECTORBLOX_MXP_0_S_AXI_INSTR_BASEADDR 0xFFFFFFFF
#define XPAR_VECTORBLOX_MXP_0_VECTOR_CUSTOM_INSTRUCTIONS 0
#define XPAR_VECTORBLOX_MXP_0_VCI_0_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_0_OPCODE_START 0
#define XPAR_VECTORBLOX_MXP_0_VCI_0_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_1_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_1_OPCODE_START 1
#define XPAR_VECTORBLOX_MXP_0_VCI_1_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_2_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_2_OPCODE_START 2
#define XPAR_VECTORBLOX_MXP_0_VCI_2_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_3_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_3_OPCODE_START 3
#define XPAR_VECTORBLOX_MXP_0_VCI_3_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_4_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_4_OPCODE_START 4
#define XPAR_VECTORBLOX_MXP_0_VCI_4_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_5_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_5_OPCODE_START 5
#define XPAR_VECTORBLOX_MXP_0_VCI_5_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_6_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_6_OPCODE_START 6
#define XPAR_VECTORBLOX_MXP_0_VCI_6_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_7_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_7_OPCODE_START 7
#define XPAR_VECTORBLOX_MXP_0_VCI_7_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_8_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_8_OPCODE_START 8
#define XPAR_VECTORBLOX_MXP_0_VCI_8_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_9_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_9_OPCODE_START 9
#define XPAR_VECTORBLOX_MXP_0_VCI_9_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_10_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_10_OPCODE_START 10
#define XPAR_VECTORBLOX_MXP_0_VCI_10_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_11_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_11_OPCODE_START 11
#define XPAR_VECTORBLOX_MXP_0_VCI_11_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_12_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_12_OPCODE_START 12
#define XPAR_VECTORBLOX_MXP_0_VCI_12_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_13_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_13_OPCODE_START 13
#define XPAR_VECTORBLOX_MXP_0_VCI_13_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_14_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_14_OPCODE_START 14
#define XPAR_VECTORBLOX_MXP_0_VCI_14_FUNCTIONS 1
#define XPAR_VECTORBLOX_MXP_0_VCI_15_LANES 1
#define XPAR_VECTORBLOX_MXP_0_VCI_15_OPCODE_START 15
#define XPAR_VECTORBLOX_MXP_0_VCI_15_FUNCTIONS 1


/******************************************************************/

/* Clock frequency for vectorblox_mxp instances */
#define XPAR_IOP1_VECTORBLOX_MXP_0_CLOCK_FREQ_HZ 100000000

/**************************************************************/

#endif  /* end of protection macro */
