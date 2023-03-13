#ifndef __FLASH_H
#define __FLASH_H

#include "main.h"

// ��ֲ�޸���

/* FLASH��С��256K */
//����һ���궨�壬������һ������STM32FLASH_SIZE��ֵΪ0x00040000UL
//����ʾSTM32оƬ��Flash�洢���Ĵ�СΪ262144�ֽڣ���256KB����UL��C�����еĺ�׺����ʾ�ó�����һ���޷��ų���������
#define STM32FLASH_SIZE  0x00040000UL

/* FLASH��ʼ��ַ */
#define STM32FLASH_BASE  FLASH_BASE

/* FLASH������ַ */
#define STM32FLASH_END   (STM32FLASH_BASE | STM32FLASH_SIZE)

/* FLASHҳ��С */
#define STM32FLASH_PAGE_SIZE FLASH_PAGE_SIZE

/* FLASH��ҳ�� */
#define STM32FLASH_PAGE_NUM  (STM32FLASH_SIZE / STM32FLASH_PAGE_SIZE)

/// ������������ 
void FLASH_Init(void);
uint32_t FLASH_Read(uint32_t Address, void *Buffer, uint32_t Size);
uint32_t FLASH_Write(uint32_t Address, const uint16_t *Buffer, uint32_t NumToWrite);
int FLASH_ErasePage(uint32_t PageAddress, uint32_t NbPages);
uint32_t FLASH_WriteNotCheck(uint32_t Address, const uint16_t *Buffer, uint32_t NumToWrite);

#endif // !__FLASH_H


