################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

C_SRCS += \
../src/Ajout_d_une_fonction_juste_avant_Task_Generate.c \
../src/Ajout_de_code_dans_StartUpTask.c \
../src/Mise_a_jour_dans_TaskStats.c \
../src/interruptions.c 

OBJS += \
./src/Ajout_d_une_fonction_juste_avant_Task_Generate.o \
./src/Ajout_de_code_dans_StartUpTask.o \
./src/Mise_a_jour_dans_TaskStats.o \
./src/interruptions.o 

C_DEPS += \
./src/Ajout_d_une_fonction_juste_avant_Task_Generate.d \
./src/Ajout_de_code_dans_StartUpTask.d \
./src/Mise_a_jour_dans_TaskStats.d \
./src/interruptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 gcc compiler'
	arm-none-eabi-gcc -Wall -O2 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../ucos_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


