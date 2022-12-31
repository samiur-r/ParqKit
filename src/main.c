#include <stdio.h>

#include "../headers/splash.h"
#include "../headers/auth.h"
#include "../headers/park.h"

int main(){
	showSplash();
    int isAuthenticated = login();

    if(isAuthenticated == 0)
    	printf("Invalid username or password");
    else park();

    return 0;
}
