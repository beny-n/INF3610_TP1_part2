//
//// juste après xil_printf("Frequence du systeme: %d\n", OS_CFG_TICK_RATE_HZ);
//
//		if (Status_CS == CS_Mutex)
//			xil_printf("Mode mutex ");
//		else if (Status_CS == CS_Semaphore)
//			xil_printf("Mode semaphore ");
//
//		xil_printf("\r\n");
//
//		if (Status_Timer == Timer_Sw)
//			xil_printf("Timer Sw pour calcul du blocage");
//		else if (Status_Timer == Timer_Hw)
//			xil_printf("Timer Hw pour calcul du blocage");
//
//		xil_printf("\r\n");
//
//
//// En remplacement du print 25:
//		if (Status_CS == CS_Mutex) {
//			xil_printf("25- Attente de blocage moyen pour le mutex :");
//			average_blocking_mutex_float = (float) average_blocking_mutex  ;
//			average_blocking_mutex_float = average_blocking_mutex_float / (float) nbPacketTraites_Video ;
//			if (Status_Timer == Timer_Hw)
//				average_blocking_mutex_float =  average_blocking_mutex_float / (float) 100000000 ;
//			else if (Status_Timer == Timer_Sw)
//				average_blocking_mutex_float =  average_blocking_mutex_float / (float) freq_hz ;
//			printf("'%.10f' pour %d packets videos traites", average_blocking_mutex_float, nbPacketTraites_Video);
//			xil_printf("\r\n");
//		}
//
//		if (Status_CS == CS_Semaphore) {
//			xil_printf("25- Attente de blocage moyen pour le semaphore :");
//			average_blocking_sem_float = (float) average_blocking_sem  ;
//			average_blocking_sem_float = average_blocking_sem_float / (float) nbPacketTraites_Video ;
//			if (Status_Timer == Timer_Hw)
//				average_blocking_sem_float =  average_blocking_sem_float / (float) 100000000 ;
//			else if (Status_Timer == Timer_Sw)
//				average_blocking_sem_float =  average_blocking_sem_float / (float) freq_hz ;
//			printf("'%.10f' pour %d packets videos traites", average_blocking_sem_float, nbPacketTraites_Video);
//			xil_printf("\r\n");
//		}
