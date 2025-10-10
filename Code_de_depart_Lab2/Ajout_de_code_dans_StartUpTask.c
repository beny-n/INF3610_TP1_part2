

// A ajouter dans StartUpTask de router.c juste après  UCOS_Print("Programme initialise - \r\n");

	initialize_gpio0();
	initialize_gpio1();
	initialize_timer();
	initialize_axi_intc();
	connect_axi();

    UCOS_Printf("Frequence  du tick d'horloge uC - %d  Hz\r\n\n", tick_rate);

	UCOS_Printf("Frequence  du tick d'horloge Hw (XTmrCtr) - 100000000 Hz\r\n");

    freq_hz = CPU_TS_TmrFreqGet(&err);  /* Get CPU timestamp timer frequency. */

	UCOS_Printf("\nFrequence  du tick d'horloge Sw (CPU_TS_Get64()): %d Hz \r\n", freq_hz);

	UCOS_Printf("\nConfiguration de départ: Mutex et Timer SW \r\n");

    xil_printf("\nMettre les switch to 00 (voir Fig. 2): \n");
    xil_printf("\nPress Button 0 to start the system: \n");




	
	// A compléter et ajouter  dans StartUpTask de router.c en remplacement de OSTaskSuspend() 
UCOS_Print("Router initialized - Ready to launch - Hit push button\r\n");

Mettre ici le OSFlagPend() qui bloque sur TASK_SHUTDOWN 

On arrête le système de manière permanente  avec la bonne variable globale
On arrête les tâches du routeur avec le masque TASK_ROUTER

	xil_printf("--------------------- Task stop suspend all tasks -------------\n");
	float nb_tick_float = (float) OSTimeGet(&err);
	float period_float = 1.0 / (float) OS_CFG_TICK_RATE_HZ;
	xil_printf("Temps total d'exécution :");
	printf("'%.5f' ms", nb_tick_float * period_float); 

	UCOS_Print("Prepare to shutdown System - \r\n");

	while (1) {       // indique que le système est en arrêt permanent
			TurnLEDButton(0b1111);   // mettre 4 bits
			OSTimeDlyHMSM(0, 0, 1, 0, OS_OPT_TIME_HMSM_STRICT, &err);
			TurnLEDButton(0b0000);
			OSTimeDlyHMSM(0, 0, 1, 0, OS_OPT_TIME_HMSM_STRICT, &err);
	}
