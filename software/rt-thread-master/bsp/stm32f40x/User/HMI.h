#ifndef __HMI_H_
#define __HMI_H_

#include "DataType.h"

void HMI_Data_Analysis(uint8 Data); //�������ݽ���
uint32 get_set_page_number(void);

uint32 get_set_status(void);

/* �������͸�HMI�� */
void uart_send_hmi_writer_status(uint8 *cmd);//���͸� hmiд���״̬

void uart_send_hmi_paper_numer(uint8 N_number);  //���͸�hmi ֽ������

void uart_send_hmi_is_short(void); //���͸�hmi �Ƿ��·

void uart_send_hmi_reboot(void);//��him��λ

extern int HMI_Status_Flag ;//������ �趨״̬��־λ ������ 1��or������2��

extern int HMI_Page_Number ;//���������͵�У׼  ֽ����
#endif

