#ifndef STDMACROS_H_
#define STDMACROS_H_

#define REG_SIZE  8

#define SET_BIT(reg,bit)        reg|=(1<<bit)
#define CLR_BIT(reg,bit)        reg&=~(1<<bit)
#define TOG_BIT(reg,bit)        reg^=(1<<bit)
#define READ_BIT(reg,bit)       ((reg & (1u<<bit))>>bit)

#define ROL(reg,bits)            reg = (reg<<bits)|(reg>>(REG_SIZE-bits))
#define ROR(reg,bits)            reg = (reg>>bits)|(reg<<(REG_SIZE-bits))

#endif
