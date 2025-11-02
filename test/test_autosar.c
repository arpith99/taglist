/* Test file for AUTOSAR TASK and ISR support */

#include <stdint.h>

/* Regular function */
void init_system(void) {
    /* initialization code */
}

/* AUTOSAR TASK declaration */
TASK(Os_5ms_Task)
{
    /* 5ms periodic task code */
}

TASK(Os_10ms_Task)
{
    /* 10ms periodic task code */
}

TASK(Os_100ms_Task)
{
    /* 100ms periodic task code */
}

/* AUTOSAR ISR declaration */
ISR(Adc_Isr)
{
    /* ADC interrupt handler */
}

ISR(Can_Tx_Isr)
{
    /* CAN transmit interrupt handler */
}

ISR(Timer_Isr)
{
    /* Timer interrupt handler */
}

/* Another regular function */
void cleanup(void) {
    /* cleanup code */
}
