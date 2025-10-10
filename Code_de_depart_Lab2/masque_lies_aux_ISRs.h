// Evenements (masques) lies aux ISRs
#define TASK_RESET_RDY  				0x20	 // RDV entre gpio_isr0 et TaskReset
#define TASK_SHUTDOWN					0x40     // RDV entre gpio_isr0 et StartUp
#define TASK_STOP_RDY  					0x80	 // RDV entre fittimer0 et TaskStop
#define TASK_STATS_PRINT				0x100    // RDV entre TaskStop et TaskStats
#define TASK_RESET_MEASUREMENTS_RDY		0x200    // RDV entre gpio_isr1 et TaskClearFifo

#define CS_Mutex 		 0		//  Critical Section with Mutex
#define CS_Semaphore 	 1		//  Critical Section with Semaphore
#define Timer_Sw 		 0    	//  CPU_TS_Get64
#define Timer_Hw		 1		//  Axi_timer en mode 64 bits
