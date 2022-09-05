#pragma once
#include "register.h"

#define ADC_Common_BASE_ADDRESS 0x40012300
#define ADC1_BASE_ADDRESS 0x40012000
#define CRC_BASE_ADDRESS 0x40023000
#define DBG_BASE_ADDRESS 0xe0042000
#define EXTI_BASE_ADDRESS 0x40013c00
#define FLASH_BASE_ADDRESS 0x40023c00
#define IWDG_BASE_ADDRESS 0x40003000
#define OTG_FS_DEVICE_BASE_ADDRESS 0x50000800
#define OTG_FS_GLOBAL_BASE_ADDRESS 0x50000000
#define OTG_FS_HOST_BASE_ADDRESS 0x50000400
#define OTG_FS_PWRCLK_BASE_ADDRESS 0x50000e00
#define PWR_BASE_ADDRESS 0x40007000
#define RCC_BASE_ADDRESS 0x40023800
#define RTC_BASE_ADDRESS 0x40002800
#define SDIO_BASE_ADDRESS 0x40012c00
#define SYSCFG_BASE_ADDRESS 0x40013800
#define TIM1_BASE_ADDRESS 0x40010000
#define TIM8_BASE_ADDRESS 0x40010400
#define TIM10_BASE_ADDRESS 0x40014400
#define TIM11_BASE_ADDRESS 0x40014800
#define TIM2_BASE_ADDRESS 0x40000000
#define TIM3_BASE_ADDRESS 0x40000400
#define TIM4_BASE_ADDRESS 0x40000800
#define TIM5_BASE_ADDRESS 0x40000c00
#define TIM9_BASE_ADDRESS 0x40014000
#define USART1_BASE_ADDRESS 0x40011000
#define USART2_BASE_ADDRESS 0x40004400
#define USART6_BASE_ADDRESS 0x40011400
#define WWDG_BASE_ADDRESS 0x40002c00
#define DMA2_BASE_ADDRESS 0x40026400
#define DMA1_BASE_ADDRESS 0x40026000
#define GPIOH_BASE_ADDRESS 0x40021c00
#define GPIOE_BASE_ADDRESS 0x40021000
#define GPIOD_BASE_ADDRESS 0x40020c00
#define GPIOC_BASE_ADDRESS 0x40020800
#define GPIOB_BASE_ADDRESS 0x40020400
#define GPIOA_BASE_ADDRESS 0x40020000
#define I2C3_BASE_ADDRESS 0x40005c00
#define I2C2_BASE_ADDRESS 0x40005800
#define I2C1_BASE_ADDRESS 0x40005400
#define I2S2ext_BASE_ADDRESS 0x40003400
#define I2S3ext_BASE_ADDRESS 0x40004000
#define SPI1_BASE_ADDRESS 0x40013000
#define SPI2_BASE_ADDRESS 0x40003800
#define SPI3_BASE_ADDRESS 0x40003c00
#define SPI4_BASE_ADDRESS 0x40013400
#define SPI5_BASE_ADDRESS 0x40015000
#define NVIC_BASE_ADDRESS 0xe000e000
namespace stm32f4 {
	namespace regs {
		struct _adc_common {
			uint32_t base_address;
			Field<32> CSR;
			Field<32> CCR;
		};
		extern struct stm32f4::regs::_adc_common adc_common;
		struct _adc {
			uint32_t base_address;
			Field<32> SR;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMPR1;
			Field<32> SMPR2;
			Field<32> JOFR1;
			Field<32> JOFR2;
			Field<32> JOFR3;
			Field<32> JOFR4;
			Field<32> HTR;
			Field<32> LTR;
			Field<32> SQR1;
			Field<32> SQR2;
			Field<32> SQR3;
			Field<32> JSQR;
			Field<32> JDR1;
			Field<32> JDR2;
			Field<32> JDR3;
			Field<32> JDR4;
			Field<32> DR;
		};
		extern struct stm32f4::regs::_adc adc1;
		struct _crc {
			uint32_t base_address;
			Field<32> DR;
			Field<32> IDR;
			Field<32> CR;
		};
		extern struct stm32f4::regs::_crc crc;
		struct _dbg {
			uint32_t base_address;
			Field<32> DBGMCU_IDCODE;
			Field<32> DBGMCU_CR;
			Field<32> DBGMCU_APB1_FZ;
			Field<32> DBGMCU_APB2_FZ;
		};
		extern struct stm32f4::regs::_dbg dbg;
		struct _exti {
			uint32_t base_address;
			Field<32> IMR;
			Field<32> EMR;
			Field<32> RTSR;
			Field<32> FTSR;
			Field<32> SWIER;
			Field<32> PR;
		};
		extern struct stm32f4::regs::_exti exti;
		struct _flash {
			uint32_t base_address;
			Field<32> ACR;
			Field<32> KEYR;
			Field<32> OPTKEYR;
			Field<32> SR;
			Field<32> CR;
			Field<32> OPTCR;
		};
		extern struct stm32f4::regs::_flash flash;
		struct _iwdg {
			uint32_t base_address;
			Field<32> KR;
			Field<32> PR;
			Field<32> RLR;
			Field<32> SR;
		};
		extern struct stm32f4::regs::_iwdg iwdg;
		struct _otg_fs_device {
			uint32_t base_address;
			Field<32> FS_DCFG;
			Field<32> FS_DCTL;
			Field<32> FS_DSTS;
			Field<32> FS_DIEPMSK;
			Field<32> FS_DOEPMSK;
			Field<32> FS_DAINT;
			Field<32> FS_DAINTMSK;
			Field<32> DVBUSDIS;
			Field<32> DVBUSPULSE;
			Field<32> DIEPEMPMSK;
			Field<32> FS_DIEPCTL0;
			Field<32> DIEPCTL1;
			Field<32> DIEPCTL2;
			Field<32> DIEPCTL3;
			Field<32> DOEPCTL0;
			Field<32> DOEPCTL1;
			Field<32> DOEPCTL2;
			Field<32> DOEPCTL3;
			Field<32> DIEPINT0;
			Field<32> DIEPINT1;
			Field<32> DIEPINT2;
			Field<32> DIEPINT3;
			Field<32> DOEPINT0;
			Field<32> DOEPINT1;
			Field<32> DOEPINT2;
			Field<32> DOEPINT3;
			Field<32> DIEPTSIZ0;
			Field<32> DOEPTSIZ0;
			Field<32> DIEPTSIZ1;
			Field<32> DIEPTSIZ2;
			Field<32> DIEPTSIZ3;
			Field<32> DTXFSTS0;
			Field<32> DTXFSTS1;
			Field<32> DTXFSTS2;
			Field<32> DTXFSTS3;
			Field<32> DOEPTSIZ1;
			Field<32> DOEPTSIZ2;
			Field<32> DOEPTSIZ3;
		};
		extern struct stm32f4::regs::_otg_fs_device otg_fs_device;
		struct _otg_fs_global {
			uint32_t base_address;
			Field<32> FS_GOTGCTL;
			Field<32> FS_GOTGINT;
			Field<32> FS_GAHBCFG;
			Field<32> FS_GUSBCFG;
			Field<32> FS_GRSTCTL;
			Field<32> FS_GINTSTS;
			Field<32> FS_GINTMSK;
			Field<32> FS_GRXSTSR_Device;
			Field<32> FS_GRXSTSR_Host;
			Field<32> FS_GRXFSIZ;
			Field<32> FS_GNPTXFSIZ_Device;
			Field<32> FS_GNPTXFSIZ_Host;
			Field<32> FS_GNPTXSTS;
			Field<32> FS_GCCFG;
			Field<32> FS_CID;
			Field<32> FS_HPTXFSIZ;
			Field<32> FS_DIEPTXF1;
			Field<32> FS_DIEPTXF2;
			Field<32> FS_DIEPTXF3;
		};
		extern struct stm32f4::regs::_otg_fs_global otg_fs_global;
		struct _otg_fs_host {
			uint32_t base_address;
			Field<32> FS_HCFG;
			Field<32> HFIR;
			Field<32> FS_HFNUM;
			Field<32> FS_HPTXSTS;
			Field<32> HAINT;
			Field<32> HAINTMSK;
			Field<32> FS_HPRT;
			Field<32> FS_HCCHAR0;
			Field<32> FS_HCCHAR1;
			Field<32> FS_HCCHAR2;
			Field<32> FS_HCCHAR3;
			Field<32> FS_HCCHAR4;
			Field<32> FS_HCCHAR5;
			Field<32> FS_HCCHAR6;
			Field<32> FS_HCCHAR7;
			Field<32> FS_HCINT0;
			Field<32> FS_HCINT1;
			Field<32> FS_HCINT2;
			Field<32> FS_HCINT3;
			Field<32> FS_HCINT4;
			Field<32> FS_HCINT5;
			Field<32> FS_HCINT6;
			Field<32> FS_HCINT7;
			Field<32> FS_HCINTMSK0;
			Field<32> FS_HCINTMSK1;
			Field<32> FS_HCINTMSK2;
			Field<32> FS_HCINTMSK3;
			Field<32> FS_HCINTMSK4;
			Field<32> FS_HCINTMSK5;
			Field<32> FS_HCINTMSK6;
			Field<32> FS_HCINTMSK7;
			Field<32> FS_HCTSIZ0;
			Field<32> FS_HCTSIZ1;
			Field<32> FS_HCTSIZ2;
			Field<32> FS_HCTSIZ3;
			Field<32> FS_HCTSIZ4;
			Field<32> FS_HCTSIZ5;
			Field<32> FS_HCTSIZ6;
			Field<32> FS_HCTSIZ7;
		};
		extern struct stm32f4::regs::_otg_fs_host otg_fs_host;
		struct _otg_fs_pwrclk {
			uint32_t base_address;
			Field<32> FS_PCGCCTL;
		};
		extern struct stm32f4::regs::_otg_fs_pwrclk otg_fs_pwrclk;
		struct _pwr {
			uint32_t base_address;
			Field<32> CR;
			Field<32> CSR;
		};
		extern struct stm32f4::regs::_pwr pwr;
		struct _rcc {
			uint32_t base_address;
			Field<32> CR;
			Field<32> PLLCFGR;
			Field<32> CFGR;
			Field<32> CIR;
			Field<32> AHB1RSTR;
			Field<32> AHB2RSTR;
			Field<32> APB1RSTR;
			Field<32> APB2RSTR;
			Field<32> AHB1ENR;
			Field<32> AHB2ENR;
			Field<32> APB1ENR;
			Field<32> APB2ENR;
			Field<32> AHB1LPENR;
			Field<32> AHB2LPENR;
			Field<32> APB1LPENR;
			Field<32> APB2LPENR;
			Field<32> BDCR;
			Field<32> CSR;
			Field<32> SSCGR;
			Field<32> PLLI2SCFGR;
		};
		extern struct stm32f4::regs::_rcc rcc;
		struct _rtc {
			uint32_t base_address;
			Field<32> TR;
			Field<32> DR;
			Field<32> CR;
			Field<32> ISR;
			Field<32> PRER;
			Field<32> WUTR;
			Field<32> CALIBR;
			Field<32> ALRMAR;
			Field<32> ALRMBR;
			Field<32> WPR;
			Field<32> SSR;
			Field<32> SHIFTR;
			Field<32> TSTR;
			Field<32> TSDR;
			Field<32> TSSSR;
			Field<32> CALR;
			Field<32> TAFCR;
			Field<32> ALRMASSR;
			Field<32> ALRMBSSR;
			Field<32> BKP0R;
			Field<32> BKP1R;
			Field<32> BKP2R;
			Field<32> BKP3R;
			Field<32> BKP4R;
			Field<32> BKP5R;
			Field<32> BKP6R;
			Field<32> BKP7R;
			Field<32> BKP8R;
			Field<32> BKP9R;
			Field<32> BKP10R;
			Field<32> BKP11R;
			Field<32> BKP12R;
			Field<32> BKP13R;
			Field<32> BKP14R;
			Field<32> BKP15R;
			Field<32> BKP16R;
			Field<32> BKP17R;
			Field<32> BKP18R;
			Field<32> BKP19R;
		};
		extern struct stm32f4::regs::_rtc rtc;
		struct _sdio {
			uint32_t base_address;
			Field<32> POWER;
			Field<32> CLKCR;
			Field<32> ARG;
			Field<32> CMD;
			Field<32> RESPCMD;
			Field<32> RESP1;
			Field<32> RESP2;
			Field<32> RESP3;
			Field<32> RESP4;
			Field<32> DTIMER;
			Field<32> DLEN;
			Field<32> DCTRL;
			Field<32> DCOUNT;
			Field<32> STA;
			Field<32> ICR;
			Field<32> MASK;
			Field<32> FIFOCNT;
			Field<32> FIFO;
		};
		extern struct stm32f4::regs::_sdio sdio;
		struct _syscfg {
			uint32_t base_address;
			Field<32> MEMRM;
			Field<32> PMC;
			Field<32> EXTICR1;
			Field<32> EXTICR2;
			Field<32> EXTICR3;
			Field<32> EXTICR4;
			Field<32> CMPCR;
		};
		extern struct stm32f4::regs::_syscfg syscfg;
		struct _tim1 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
			Field<32> RCR;
			Field<32> BDTR;
		};
		extern struct stm32f4::regs::_tim1 tim1;
		struct _tim8 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
			Field<32> RCR;
			Field<32> BDTR;
		};
		extern struct stm32f4::regs::_tim8 tim8;
		struct _tim10 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
		};
		extern struct stm32f4::regs::_tim10 tim10;
		struct _tim11 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> OR;
		};
		extern struct stm32f4::regs::_tim11 tim11;
		struct _tim2 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
			Field<32> OR;
		};
		extern struct stm32f4::regs::_tim2 tim2;
		struct _tim3 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
		};
		extern struct stm32f4::regs::_tim3 tim3;
		struct _tim4 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
		};
		extern struct stm32f4::regs::_tim4 tim4;
		struct _tim5 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCMR2_Output;
			Field<32> CCMR2_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
			Field<32> CCR3;
			Field<32> CCR4;
			Field<32> DCR;
			Field<32> DMAR;
			Field<32> OR;
		};
		extern struct stm32f4::regs::_tim5 tim5;
		struct _tim9 {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SMCR;
			Field<32> DIER;
			Field<32> SR;
			Field<32> EGR;
			Field<32> CCMR1_Output;
			Field<32> CCMR1_Input;
			Field<32> CCER;
			Field<32> CNT;
			Field<32> PSC;
			Field<32> ARR;
			Field<32> CCR1;
			Field<32> CCR2;
		};
		extern struct stm32f4::regs::_tim9 tim9;
		struct _usart {
			uint32_t base_address;
			Field<32> SR;
			Field<32> DR;
			Field<32> BRR;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> CR3;
			Field<32> GTPR;
		};
		extern struct stm32f4::regs::_usart usart1;
		extern struct stm32f4::regs::_usart usart2;
		extern struct stm32f4::regs::_usart usart6;
		struct _wwdg {
			uint32_t base_address;
			Field<32> CR;
			Field<32> CFR;
			Field<32> SR;
		};
		extern struct stm32f4::regs::_wwdg wwdg;
		struct _dma {
			uint32_t base_address;
			Field<32> LISR;
			Field<32> HISR;
			Field<32> LIFCR;
			Field<32> HIFCR;
			Field<32> S0CR;
			Field<32> S0NDTR;
			Field<32> S0PAR;
			Field<32> S0M0AR;
			Field<32> S0M1AR;
			Field<32> S0FCR;
			Field<32> S1CR;
			Field<32> S1NDTR;
			Field<32> S1PAR;
			Field<32> S1M0AR;
			Field<32> S1M1AR;
			Field<32> S1FCR;
			Field<32> S2CR;
			Field<32> S2NDTR;
			Field<32> S2PAR;
			Field<32> S2M0AR;
			Field<32> S2M1AR;
			Field<32> S2FCR;
			Field<32> S3CR;
			Field<32> S3NDTR;
			Field<32> S3PAR;
			Field<32> S3M0AR;
			Field<32> S3M1AR;
			Field<32> S3FCR;
			Field<32> S4CR;
			Field<32> S4NDTR;
			Field<32> S4PAR;
			Field<32> S4M0AR;
			Field<32> S4M1AR;
			Field<32> S4FCR;
			Field<32> S5CR;
			Field<32> S5NDTR;
			Field<32> S5PAR;
			Field<32> S5M0AR;
			Field<32> S5M1AR;
			Field<32> S5FCR;
			Field<32> S6CR;
			Field<32> S6NDTR;
			Field<32> S6PAR;
			Field<32> S6M0AR;
			Field<32> S6M1AR;
			Field<32> S6FCR;
			Field<32> S7CR;
			Field<32> S7NDTR;
			Field<32> S7PAR;
			Field<32> S7M0AR;
			Field<32> S7M1AR;
			Field<32> S7FCR;
		};
		extern struct stm32f4::regs::_dma dma2;
		extern struct stm32f4::regs::_dma dma1;
		struct _gpio {
			uint32_t base_address;
			Field<32> MODER;
			Field<32> OTYPER;
			Field<32> OSPEEDR;
			Field<32> PUPDR;
			Field<32> IDR;
			Field<32> ODR;
			Field<32> BSRR;
			Field<32> LCKR;
			Field<32> AFRL;
			Field<32> AFRH;
		};
		extern struct stm32f4::regs::_gpio gpioh;
		extern struct stm32f4::regs::_gpio gpioe;
		extern struct stm32f4::regs::_gpio gpiod;
		extern struct stm32f4::regs::_gpio gpioc;
		extern struct stm32f4::regs::_gpio gpiob;
		extern struct stm32f4::regs::_gpio gpioa;
		struct _i2c {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> OAR1;
			Field<32> OAR2;
			Field<32> DR;
			Field<32> SR1;
			Field<32> SR2;
			Field<32> CCR;
			Field<32> TRISE;
		};
		extern struct stm32f4::regs::_i2c i2c3;
		extern struct stm32f4::regs::_i2c i2c2;
		extern struct stm32f4::regs::_i2c i2c1;
		struct _i2s2ext {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SR;
			Field<32> DR;
			Field<32> CRCPR;
			Field<32> RXCRCR;
			Field<32> TXCRCR;
			Field<32> I2SCFGR;
			Field<32> I2SPR;
		};
		extern struct stm32f4::regs::_i2s2ext i2s2ext;
		struct _i2s3ext {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SR;
			Field<32> DR;
			Field<32> CRCPR;
			Field<32> RXCRCR;
			Field<32> TXCRCR;
			Field<32> I2SCFGR;
			Field<32> I2SPR;
		};
		extern struct stm32f4::regs::_i2s3ext i2s3ext;
		struct _spi {
			uint32_t base_address;
			Field<32> CR1;
			Field<32> CR2;
			Field<32> SR;
			Field<32> DR;
			Field<32> CRCPR;
			Field<32> RXCRCR;
			Field<32> TXCRCR;
			Field<32> I2SCFGR;
			Field<32> I2SPR;
		};
		extern struct stm32f4::regs::_spi spi1;
		extern struct stm32f4::regs::_spi spi2;
		extern struct stm32f4::regs::_spi spi3;
		extern struct stm32f4::regs::_spi spi4;
		extern struct stm32f4::regs::_spi spi5;
		struct _nvic {
			uint32_t base_address;
			Field<32> ICTR;
			Field<32> STIR;
			Field<32> ISER0;
			Field<32> ISER1;
			Field<32> ISER2;
			Field<32> ICER0;
			Field<32> ICER1;
			Field<32> ICER2;
			Field<32> ISPR0;
			Field<32> ISPR1;
			Field<32> ISPR2;
			Field<32> ICPR0;
			Field<32> ICPR1;
			Field<32> ICPR2;
			Field<32> IABR0;
			Field<32> IABR1;
			Field<32> IABR2;
			Field<32> IPR0;
			Field<32> IPR1;
			Field<32> IPR2;
			Field<32> IPR3;
			Field<32> IPR4;
			Field<32> IPR5;
			Field<32> IPR6;
			Field<32> IPR7;
			Field<32> IPR8;
			Field<32> IPR9;
			Field<32> IPR10;
			Field<32> IPR11;
			Field<32> IPR12;
			Field<32> IPR13;
			Field<32> IPR14;
			Field<32> IPR15;
			Field<32> IPR16;
			Field<32> IPR17;
			Field<32> IPR18;
			Field<32> IPR19;
		};
		extern struct stm32f4::regs::_nvic nvic;
	};
};
