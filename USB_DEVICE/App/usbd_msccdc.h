/**
 * @file        usbd_msccdc.h
 * @author      Pzkkkk
 * @version     V0.1
 * @date        2021.12.5
 * @brief       MSC + CDC 
 * @note
 * @attention   COYPRIGHT PZKKKK
 */
 
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_MSCCDC_H
#define __USBD_MSCCDC_H
 
#ifdef __cplusplus
 extern "C" {
#endif
 
/* Includes ------------------------------------------------------------------*/
#include  "usbd_ioreq.h"
#include 	"usbd_cdc.h"
#include 	"usbd_msc.h"

#define MC_MAX_FS_PACKET            0x40

#define USB_MC_CONFIG_DESC_SIZ      106 

#define MC_MSC_EPIN_ADDR                MSC_EPIN_ADDR 
#define MC_MSC_EPOUT_ADDR               MSC_EPOUT_ADDR 

#define MC_CDC_IN_EP                   CDC_IN_EP 
#define MC_CDC_OUT_EP                  CDC_OUT_EP  
#define MC_CDC_CMD_EP                  CDC_CMD_EP 

extern USBD_ClassTypeDef  USBD_COMPOSITE;
 
/**
  * @}
  */
 
/**
  * @}
  */
 
#ifdef __cplusplus
}
#endif
 
#endif  /* __USBD_MSCCDC_H */
/**
  * @}
  */
 
/************************ (C) COPYRIGHT PZKKKK *****END OF FILE****/
