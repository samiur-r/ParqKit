################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/auth.c \
../src/foo.c \
../src/main.c \
../src/parking.c \
../src/splash.c 

O_SRCS += \
../src/main.o 

C_DEPS += \
./src/auth.d \
./src/foo.d \
./src/main.d \
./src/parking.d \
./src/splash.d 

OBJS += \
./src/auth.o \
./src/foo.o \
./src/main.o \
./src/parking.o \
./src/splash.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/auth.d ./src/auth.o ./src/foo.d ./src/foo.o ./src/main.d ./src/main.o ./src/parking.d ./src/parking.o ./src/splash.d ./src/splash.o

.PHONY: clean-src

