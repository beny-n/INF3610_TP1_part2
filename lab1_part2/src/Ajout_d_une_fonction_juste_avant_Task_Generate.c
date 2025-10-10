//CPU_INT64U AXITimer64_Read(void)     // Utilisé dans TaskComputing
//{
//    // Lecture atomique MSW/LSW/MSW
//    u32 msw1 = XTmrCtr_GetValue(&timer_dev, 1);
//    u32 lsw  = XTmrCtr_GetValue(&timer_dev, 0);
//    u32 msw2 = XTmrCtr_GetValue(&timer_dev, 1);
//    if (msw2 != msw1) { lsw = XTmrCtr_GetValue(&timer_dev, 0); msw1 = msw2; }
//
//    return (((CPU_INT64U)msw1) << 32) | (CPU_INT64U)lsw;
//}
