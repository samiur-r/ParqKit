################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../sources/foo.c \
../sources/main.c 

C_DEPS += \
./sources/foo.d \
./sources/main.d 

OBJS += \
./sources/foo.o \
./sources/main.o 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.c sources/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-sources

clean-sources:
	-$(RM) ./sources/foo.d ./sources/foo.o ./sources/main.d ./sources/main.o

.PHONY: clean-sources

