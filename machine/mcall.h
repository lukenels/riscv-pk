#ifndef _RISCV_SBI_H
#define _RISCV_SBI_H

#define SBI_SET_TIMER 0
#define SBI_CONSOLE_PUTCHAR 1
#define SBI_CONSOLE_GETCHAR 2
#define SBI_CLEAR_IPI 3
#define SBI_SEND_IPI 4
#define SBI_REMOTE_FENCE_I 5
#define SBI_REMOTE_SFENCE_VMA 6
#define SBI_REMOTE_SFENCE_VMA_ASID 7
#define SBI_SHUTDOWN 8

#define SBI_SM_CREATE_ENCLAVE   101
#define SBI_SM_DESTROY_ENCLAVE  102
#define SBI_SM_COPY_TO_ENCLAVE  103
#define SBI_SM_COPY_FROM_ENCLAVE  104

// SM CALLS (from U-mode)
#define ABI_SM_DEADBEEF 999
#define ABI_SM_GET_FIELD 1000
#define ABI_SM_AES 1001
#define ABI_SM_SIGN 1002
#define ABI_SM_POET 1003


// FILED IDs
#define SM_FIELD_PK_D	100
#define SM_FIELD_H_SM	101
#define SM_FIELD_PK_SM 102
#define SM_FIELD_SIGN_D 103

#endif
