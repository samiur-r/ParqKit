#include <stdio.h>
#include <stdlib.h>
#include "../headers/splash.h"
#include "../headers/auth.h"

int main(){
	showSplash();
    int isAuthenticated = login();
    printf("%d", isAuthenticated);

}
